#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

void start_server(boost::asio::io_context& io_context)
{
    tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 1234));

    while (true) {
        tcp::socket socket(io_context);
        acceptor.accept(socket);

        std::string message = "Hello, world!";

        boost::asio::write(socket, boost::asio::buffer(message));
    }
}

void start_client(boost::asio::io_context& io_context)
{
    tcp::resolver resolver(io_context);
    tcp::resolver::results_type endpoints = resolver.resolve("localhost", "1234");

    tcp::socket socket(io_context);
    boost::asio::connect(socket, endpoints);

    boost::system::error_code error;
    boost::asio::streambuf receive_buffer;

    // Read data from the socket until the end of file is reached
    while (boost::asio::read(socket, receive_buffer, boost::asio::transfer_at_least(1), error)) {
        // Process the received data
        std::istream is(&receive_buffer);
        std::string message;
        is >> message;
        std::cout << "Received message: " << message << std::endl;

        // Clear the receive buffer for the next iteration
        receive_buffer.consume(receive_buffer.size());
    }

    // Check if the read operation ended due to an error
    if (error != boost::asio::error::eof) {
        throw boost::system::system_error(error);
    }
}


int main()
{
    boost::asio::io_context io_context;

    std::thread server_thread([&] { start_server(io_context); });
    std::thread client_thread([&] { start_client(io_context); });

    server_thread.join();
    client_thread.join();

    return 0;
}
