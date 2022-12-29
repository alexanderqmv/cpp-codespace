#include <iostream>
#include <string>

// Hash function that takes a string as input and returns a 32-bit integer hash value.
unsigned int Hash(const std::string& key) {
    unsigned int hash = 0;
    for (char c : key) {
        hash = (hash << 5) + hash + c;
    }
    return hash;
}

int main() {
    std::string key = "hello";
    unsigned int hash = Hash(key);
    std::cout << "Hash value for key '" << key << "': 0x"  << std::hex << hash << std::endl;
   
    return 0;
}
