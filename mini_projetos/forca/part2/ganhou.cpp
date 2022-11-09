#include <vector>
#include <string>
#include <map>

bool ganhou(std::string &palavra_secreta, std::map<char, bool> &acertos) {
    for(char letra : palavra_secreta) {
        if(!acertos[letra]) return false;
    }

    return true;
}