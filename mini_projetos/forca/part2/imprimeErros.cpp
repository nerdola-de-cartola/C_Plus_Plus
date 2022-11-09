#include <iostream>
#include <vector>

void imprimeErros(std::vector<char> &erros) {
    std::cout << "Chutes errados: ";
    for(char letra : erros) {
        std::cout << letra << " ";
    }

    std::cout << std::endl;
}