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

    #include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    // Preverimo, če je uporabnik podal argument za vhodno datoteko
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
    // Beremo kot int in pretvorimo v unsigned char (da ne prebere ASCII znakov)
    while (inFile >> num) {
        A.push_back(static_cast<unsigned char>(num));
    }
    inFile.close();

    std::ofstream outFile("out.txt");
    if (!outFile) {
        std::cerr << "Napaka pri ustvarjanju izhodne datoteke!\n";
        return 1;
    }

    // izpis stevil s presledkom
    for (unsigned char x : A) {
        outFile << static_cast<int>(x) << " ";
    }
    outFile.close();

    return 0;
}

    return 0;
}