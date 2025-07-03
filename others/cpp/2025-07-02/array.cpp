#include <iostream>
#include <vector>

int main(){

    std::vector<int> angka;
    for (int i = 1; i<= 100; i++) {
        angka.push_back(i);
    }
    for (int i : angka) {
        std::cout << i << " ";
    }

    return 0;
}
