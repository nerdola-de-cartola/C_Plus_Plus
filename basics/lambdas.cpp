#include <iostream>
#include <vector>
#include <functional>

template<typename T>
void forEach(std::vector<T> &arr, const std::function<void(int)> &input_function) {
   for(int &value : arr) input_function(value);
}

int main(void) {
   std::vector<int> list = {1, 4, 5, 2 , 8, 0};

   auto print = [](int input) {
         std::cout << input << std::endl;
   };

   int add = 6;

   forEach(list, [add](int input) {
         std::cout << input+add << std::endl;
   });

   std::cout << std::endl;

   forEach(list, print);
}