#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Block class represents a single block in the blockchain.
class Block {
public:
    std::string data;
    std::string prev_hash;
    std::string hash;

    Block(const std::string& data, const std::string& prev_hash)
        : data(data), prev_hash(prev_hash) {
        hash = CalculateHash();
    }

    // Calculates the hash for this block using the data and prev_hash fields.
    std::string CalculateHash() const {
        std::string input = data + prev_hash;
        // Use a cryptographic hash function to calculate the hash.
        // In this example, we'll use a very simple hash function for simplicity.
        std::string hash;
        for (char c : input) {
            hash += c * (c + 1);
        }
        return hash;
    }
};

// Blockchain class represents a chain of blocks.
class Blockchain {
public:
    std::vector<Block> chain;

    void AddBlock(const Block& block) {
        chain.push_back(block);
    }
};

int main() {

    setlocale(0, "");
    Blockchain blockchain;

    // Add some blocks to the chain.
    blockchain.AddBlock(Block("This is the first block.", ""));
    blockchain.AddBlock(Block("This is the second block.", blockchain.chain.back().hash));
    blockchain.AddBlock(Block("This is the third block.", blockchain.chain.back().hash));

    // Print the data for each block in the chain.
    for (const Block& block : blockchain.chain) {
        std::cout << "Data: " << block.data << std::endl;
        std::cout << "Prev hash: " << block.prev_hash << std::endl;
        std::cout << "Hash: " << block.hash << std::endl;
    }

    return 0;
}
