#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Masukkan jumlah mahasiswa: ";
    std::cin >> n;

    std::vector<int> nilai(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Nilai mahasiswa ke-" << (i+1) << ": ";
        std::cin >> nilai[i];
    }

    // Hitung rata-rata
    double total = 0;
    for (int val : nilai) total += val;
    double rata = total / n;

    // Cari nilai min & max
    int min_nilai = *std::min_element(nilai.begin(), nilai.end());
    int max_nilai = *std::max_element(nilai.begin(), nilai.end());

    // Urutkan nilai
    std::sort(nilai.begin(), nilai.end());

    // Tampilkan hasil
    std::cout << "\nStatistik Nilai:\n";
    std::cout << "Rata-rata: " << rata << "\n";
    std::cout << "Nilai Terkecil: " << min_nilai << "\n";
    std::cout << "Nilai Terbesar: " << max_nilai << "\n";
    std::cout << "Nilai Setelah Diurutkan: ";
    for (int val : nilai) std::cout << val << " ";

    return 0;
}
