#include <iostream>
#include <string>
#include <vector>
#include <sstream>

struct Mahasiswa {
    std::string nama;
    int semester;
    std::string nim;
};

int main(){


    std::vector<Mahasiswa> kelas;
    kelas.emplace_back("Feby", 3, "26050124130087");
    kelas.emplace_back("Rina", 5, "26050123136653");

    Mahasiswa input;
    std::string inputLine;

    std::cout << "Input Nama, Semester, dan NIM dari mahasiswa yang ingin ditambahkan (pisahkan dengan spasi): ";
    std::getline(std::cin, inputLine);

    std::istringstream iss(inputLine);
    iss >> input.nama >> input.semester >> input.nim;
    kelas.push_back(input);

    int no{1};
    for (const auto& mhs : kelas){
        std::cout << "Mahasiswa ke-" << no++ << ":\n";
        std::cout << "a). Nama: " << mhs.nama << "\n";
        std::cout << "b). Semester: " <<  mhs.semester << "\n";
        std::cout << "c). NIM: " << mhs.nim  << "\n\n";
    }
    return 0;
}
