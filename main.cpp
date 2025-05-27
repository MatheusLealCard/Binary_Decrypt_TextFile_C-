#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

int main(){ 
    std::ifstream Read_from_file("a.txt");

    if(!Read_from_file){
        std::cerr << "Error opening the file" << std::endl;
    }

    std::string binary;
    std::getline(Read_from_file, binary);
    binary.erase(std::remove(binary.begin(), binary.end(), ' '), binary.end());

    for(size_t i = 0; i + 7 < binary.size(); i += 8){
        std::string byte_str = binary.substr(i, 8);
        char character = static_cast<char>(std::bitset<8>(byte_str).to_ulong());
        std::cout << character;
    }

    std::cout << std::endl;
    Read_from_file.close();
}
