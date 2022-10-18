#include <iostream>

using namespace std;

class Base {
   public:
      Base() {
         cout << "Constructing base class" << endl;
      }

      virtual ~Base() {
         cout << "Destroying base class" << endl;
      }
};

class Derived : public Base {
   public:
      Derived() {
         cout << "Constructing derived class" << endl;
      }

      ~Derived() {
         cout << "Destroying derived class" << endl;
      }
};

int main(void) {
   Base *my_base = new Base();
   delete my_base;

   cout << endl;

   Derived *my_derived = new Derived();
   delete my_derived;

   cout << endl;

   Base *my_poly = new Derived();
   delete my_poly;

   return 0;
}