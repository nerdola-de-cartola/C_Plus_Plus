#include <iostream>
#include <vector>
#include <string>
#include <map>

void imprimeAcertos(std::string &palavra_secreta, std::map<char, bool> &acertos) {
    for(char letra : palavra_secreta) {
        if(acertos[letra]) {
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }
    }

    std::cout << std::endl;
}