#include <iostream>
#include <string>

  
// Encrypts the input string using the Caesar cipher algorithm.
std::string Encrypt(const std::string& input, int key) {
    std::string output;
    for (char c : input) {
        output += char((c + key - 'a') % 26 + 'a');
    }
    return output;
}

// Decrypts the input string using the Caesar cipher algorithm.
std::string Decrypt(const std::string& input, int key) {
    std::string output;
    for (char c : input) {
        output += char((c - key - 'a' + 26) % 26 + 'a');
    }
    return output;
}


int main() {
    std::string input = "i was glad to see michael";
    int key = 3;

    std::string encrypted = Encrypt(input, key);
    std::cout << "Encrypted: " << encrypted << std::endl;

    std::string decrypted = Decrypt(encrypted, key);
    std::cout << "Decrypted: " << decrypted << std::endl;

     

    return 0;
}





 
