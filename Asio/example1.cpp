#include <boost/asio.hpp>
#include <boost/bind.hpp>

#include <iostream>
#include <vector>

using namespace boost::asio;


void handleAccept(ip::tcp::socket& socket, const boost::system::error_code& error)
{
	if (!error)
	{
		std::cerr << "Server:  " << error.what() << std::endl;
		return; // close the server
	}
	std::cout << "New connection accepted!" << std::endl;
}


int main()
{

	// represents our program's link to the OS I/O Services
	io_context io_context_;
	
	ip::tcp::acceptor acceptor_(io_context_, ip::tcp::endpoint(ip::tcp::v4(), 8000));
	// creating tcp socket
	ip::tcp::socket socket(io_context_);
	acceptor_.async_accept(socket, boost::bind(handleAccept, boost::ref(socket), _1));
	io_context_.run();
	 
	
	 


	return 0;
}
