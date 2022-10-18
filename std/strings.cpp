#include <iostream>
#include <string>

int main(void) {
   std::string my_name = std::string("Matheus") + std::string(" Lucas");
   my_name += " Morais";
   my_name += " Pires";

   std::string gf_name = "Alice Goncalves Macedo";

   std::string couple_name;
   couple_name = gf_name + " + " + my_name;

   std::cout << my_name << std::endl;
   std::cout << gf_name << std::endl;
   std::cout << couple_name << std::endl;
   
   std::cout << std::endl;

   std::cout << "Size: " << my_name.size() << std::endl;

   std::cout << "Length: " << my_name.length() << std::endl;

   std::cout << "Max Size: " << my_name.max_size() << std::endl;

   std::cout << "Capacity : " << my_name.capacity() << std::endl;

   my_name.resize(64);
   std::cout << "New capacity : " << my_name.capacity() << std::endl;

   my_name.reserve(2);
   std::cout << "New capacity : " << my_name.capacity() << std::endl;

   // my_name.clear();
   // std::cout << "New capacity : " << my_name.capacity() << std::endl;

   std::cout << "Empty: ";
   if(my_name.empty()) std::cout << "Yes";
   else std::cout << "No";
   std::cout << std::endl;

   my_name.shrink_to_fit();
   std::cout << "New capacity : " << my_name.capacity() << std::endl;

   std::cout << my_name.at(5) << std::endl;
   my_name.at(5) = 'w';
   std::cout << my_name << std::endl;

   std::cout << my_name.front() << std::endl;
   std::cout << my_name.back() << std::endl;

   my_name.back() = 'Z';
   std::cout << my_name << std::endl;

   return 0;
}