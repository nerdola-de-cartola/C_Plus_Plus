#include <iostream>

using namespace std;

class Entity {
   protected:
      double x;
      double y;

   public:
      Entity() {}

      virtual string getName() {
         return "Entity";
      }
};

class Player : public Entity {
   protected:
      string name;

   public:
      Player(const string &name):
         name(name) {}

      string getName() override {
         return this->name; 
      }

};

int main(void) {
   Entity *e = new Entity;
   cout << e->getName() << endl;

   Player *p = new Player("Matheus");
   cout << p->getName() << endl;

   Entity *player = new Player("Alice");
   cout << player->getName() << endl;

   return 0;
}