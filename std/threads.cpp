#include <iostream>
#include <thread>

static bool FINESHED = false;

void print() {
   using namespace std::literals::chrono_literals;

   std::cout << std::this_thread::get_id() << std::endl;


   while(!FINESHED) {
      std::cout << "Printing...\n";
      std::this_thread::sleep_for(1s);
   }
}

int main(void) {
   std::cout << std::this_thread::get_id() << std::endl;

   std::thread thread_print(print);

   std::cin.get();
   FINESHED = true;

   thread_print.join();

   std::cin.get();

   return 0;
}