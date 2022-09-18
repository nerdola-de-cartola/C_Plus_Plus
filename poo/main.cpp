#include "client.hpp"
#include <iostream>

using namespace std;

int main(void) {
   Person eu = Person(1, "Matheus", 19, 20);
   Client comprador = Client(2, "Fulano", 33, 8, 1024.50); 

   eu.print();
   eu.free();
   eu.~Person();

   cout << endl;

   comprador.print();
   comprador.free();
   comprador.~Client();

   return 0;
}