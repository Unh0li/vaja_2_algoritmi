#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    // preverimo argument za vhodno datoteko
    if (argc < 2) {
        std::cerr << "Uporaba: " << argv[0] << " <vhodna datoteka>\n";
        return 1;
    }

    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Napaka pri odpiranju vhodne datoteke!\n";
        return 1;
    }

    std::vector<unsigned char> A;
    int num;
    // beremo kot int in pretvorimo v char
    while (inFile >> num) {
        A.push_back(static_cast<unsigned char>(num));
    }
    inFile.close();

    return 0;
}