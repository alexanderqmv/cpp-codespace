#include <boost/asio.hpp>
#include <boost/bind.hpp>

#include <iostream>
#include <vector>

using namespace boost::asio;
class __ASIO_TCP__Network
{
public:
	__ASIO_TCP__Network(io_context& io, unsigned short port )
		: io_context_(io), acceptor_(io_context_, ip::tcp::endpoint(ip::tcp::v4(), port)) { }
	
	
	void run()
	{
		std::cout << "Server started listening on port " << acceptor_.local_endpoint().port() << std::endl;
		startAccept();
		io_context_.run();
	}

private:
	
	void startAccept()
	{
		auto socket = std::make_shared<ip::tcp::socket>(io_context_);
		acceptor_.async_accept(*socket,
			boost::bind(&__ASIO_TCP__Network::handleAccept,
				this,
				socket,
				placeholders::error));
		/* auto socket = std::make_shared<ip::tcp::socket>(io_context_);
    	   acceptor_.async_accept(*socket, [this, socket](const boost::system::error_code& error) {
               handleAccept(socket, error);});
*/
	}
	void handleAccept(std::shared_ptr<ip::tcp::socket> socket, const boost::system::error_code& error)
	{
		if (error)
		{
			std::cerr << "Error: " << error.message() << std::endl;
		}
		else std::cout << "New Connection has been accepted!" << std::endl;
		startAccept();
	}
private:
	
	io_context& io_context_;
	ip::tcp::acceptor acceptor_;
};

using TCPNET = __ASIO_TCP__Network;
 


int main()
{
	io_context io;
	TCPNET tcp(io, 8000);
	
	tcp.run();
	 
	 


	return 0;
}
