#include <iostream>

int main(void) {
   int *arr = new int[20];

   for(int i = 0; i < 20; i++) arr[i] = i+1;

   for(int i = 0; i < 20; i++) std::cout << arr[i] << ' ';
   std::cout << std::endl;

   delete [] arr;

   return 0;
}