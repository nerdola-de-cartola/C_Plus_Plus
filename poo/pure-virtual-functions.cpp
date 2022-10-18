#include <iostream>

using namespace std;

class Printable {
   public:
      virtual string getClassName() = 0;
};

class Entity : public Printable {
   protected:
      double x;
      double y;

   public:
      Entity() {}

      virtual string getName() {
         return "Entity";
      }

      string getClassName() override {
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

      string getClassName() override {
         return "Player";
      }

};

void printClass(Printable *obj) {
   cout << obj->getClassName() << endl;
}

int main(void) {
   Entity *e = new Entity;
   // cout << e->getName() << endl;
   printClass(e);

   Player *p = new Player("Matheus");
   // cout << p->getName() << endl;
   printClass(p);


   Entity *player = new Player("Alice");
   // cout << player->getName() << endl;
   printClass(player);

   return 0;
}