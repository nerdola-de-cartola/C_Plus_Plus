#include <iostream>
#include <stdlib.h>

int main(void) {
   int *p = new int {42};

   // int *p = (int *) malloc(sizeof(int));
   // *p = 21;

   std::cout << *p << std::endl;

   // free(p);

   delete p;

   return 0;
}