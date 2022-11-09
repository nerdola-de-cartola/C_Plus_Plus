#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "imprimeCabecalho.hpp"
#include "sorteiaPalavra.hpp"
#include "ganhou.hpp"
#include "enforcou.hpp"
#include "imprimeAcertos.hpp"
#include "imprimeErros.hpp"
#include "chute.hpp"
#include "adicionaPalavra.hpp"

using namespace std;

static string palavra_secreta;
static map<char, bool> acertos;
static vector<char> erros;

int main(void) {
    imprimeCabecalho();

    palavra_secreta = sorteiaPalavra();
   
    while(!ganhou(palavra_secreta, acertos) && !enforcou(erros)) {
        imprimeAcertos(palavra_secreta, acertos);
        imprimeErros(erros);
        chute(acertos, erros);
    }

    if(enforcou(erros)) {
        cout << "Que pena, você se enforcou" << endl;
        cout << "A palavra secreta era... " << palavra_secreta << endl;
    } else {
        imprimeAcertos(palavra_secreta, acertos);
        cout << "Parabéns você venceu!" << endl;
        cout << "Deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        cin >> resposta;
        if(resposta == 'S') {
            adicionaPalavra();
        }
    }

    return 0;
}