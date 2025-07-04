#include <iostream>
#include <string>
#include <vector>

struct Mahasiswa {
    std::string nama;
    int semester;
    std::string nim;
};

int main(){

    std::vector<Mahasiswa> kelas;

    kelas.emplace_back("feby Syarief", 3, "26050124130087");
    kelas.emplace_back("Rina Saputri", 5, "26050124130173");

    Mahasiswa input;

    std::cout << "Input data mahasiswa\n";
    std::cout << "nama lengkap: ";
    std::getline(std::cin, input.nama);

    std::cout << "semester: ";
    while(!(std::cin >> input.semester || input.semester <= 0)){
        std::cout << "Semester harus berupa angka positif. Ulangi: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cin.ignore();
    std::cout << "NIM: ";
    std::getline(std::cin, input.nim);

    kelas.push_back(input);

    std::cout << "Daftar Mahasiswa: \n\n";
    int no{1};
    for (const auto& mhs : kelas){
        std::cout << "Mahasiswa ke-" << no++ << ":\n";
        std::cout << "a). Nama: " << mhs.nama << "\n";
        std::cout << "b). Semester: " << mhs.semester << "\n";
        std::cout << "c). NIM: " << mhs.nim << "\n\n";
    }
    return 0;
}
