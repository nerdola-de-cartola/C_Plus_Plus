#include <iostream>
#include <chrono>
#include <thread>

int main(void) {
   auto start = std::chrono::high_resolution_clock::now();

   {
      using namespace std::chrono_literals;
      std::this_thread::sleep_for(1s);
   }

   auto end = std::chrono::high_resolution_clock::now();

   std::chrono::duration<double> diference = end - start;

   std::cout << diference.count() << 's' << std::endl;
   
   return 0;
}