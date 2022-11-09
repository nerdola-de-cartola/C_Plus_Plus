#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main(void) {
    Conta conta1("123", "456", "Matheus");
    Conta conta2("987", "654", "Augusto");

    conta1.depositar(1000);
    conta1.sacar(100);

    conta2.depositar(100);
    conta2.sacar(88);
    
    cout << conta1.recuperaNome() << " - " << conta1.recuperaSaldo() << endl;
    cout << conta2.recuperaNome() << " - " << conta2.recuperaSaldo() << endl;
    
    return 0;
}
