#include <iostream>
#include <map>
#include <vector>
#include "cinstr.hpp"

void chute(std::map<char, bool> &acertos, std::vector<char> &erros) {
    char chute;
    std::cout << "Seu chute: ";
    std::cin >> chute;

    if(cinstr(chute)) {
        std::cout << "Acertou" << std::endl;
        acertos[chute] = true;
    } else {
        std::cout << "Errou" << std::endl;
        erros.push_back(chute);
    }
}