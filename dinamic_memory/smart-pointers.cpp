#include <iostream>
#include <memory>

using namespace std;

class Entity {
   public:
      Entity() {
         cout << "Create Entity" << endl;
      }

      ~Entity() {
         cout << "Destroyed Entity" << endl;
      }

      void print() {
         cout << "Printing" << endl;
      }
};

int main(void) {
   // unique_ptr<Entity> p(new Entity);
   unique_ptr<Entity> p = make_unique<Entity>();
   p->print();

   {
      shared_ptr<Entity> s = make_shared<Entity>();

      {
         shared_ptr<Entity> s1 = s;
      }

   }

   return 0;
}
