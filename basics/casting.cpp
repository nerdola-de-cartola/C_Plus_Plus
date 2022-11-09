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

class AnotherDerived : public Base {
   public:
      AnotherDerived() {
         cout << "Constructing another derived class" << endl;
      }

      ~AnotherDerived() {
         cout << "Destroying another derived class" << endl;
      }
};

int main(void) {
   int a = 5;

   AnotherDerived *cast = (AnotherDerived *) &a; // Works
   // AnotherDerived *cast2 = static_cast<AnotherDerived *> (&a); Does not work
   AnotherDerived *cast2 = reinterpret_cast<AnotherDerived *> (&a); // Works

   return 0;
}