#include <iostream>
#include <array>

int main(void) {
   std::array<int, 4> my_array;

   my_array[0] = 1;
   my_array[1] = 3;
   my_array[2] = 5;

   for(int &value : my_array) {
      std::cout << value << std::endl; // Error
   }

   std::cout << std::endl;

   for(int i = 0; i < 3; i++) {
      std::cout << my_array[i] << std::endl;
   }
}