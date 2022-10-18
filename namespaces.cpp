#include <iostream>

namespace apple
{

   namespace green
   {
      void print() {
         std::cout << "Green aplle" << std::endl;
      }
   } 
   

   void print() {
      std::cout << "Aplle" << std::endl;
   }
   
} 


namespace orange
{
   void print() {
      std::cout << "Orange" << std::endl;
   }
   
} 



int main(void) {
   apple::print();
   apple::green::print();
   orange::print();
;}