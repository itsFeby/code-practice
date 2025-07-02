//program to mirror a string

#include <iostream>
#include <string>

int main() {
    std::string original;
    std::cout << "Enter the string you want to mirror: ";
    std::getline(std::cin, original);
    std::string mirrored = original;

    // Append characters in reverse order
    for (int i = original.length() - 1; i >= 0; --i) {
        mirrored += original[i];
    }

    std::cout << "mirrored string: " << mirrored << std::endl;
    return 0;
}
