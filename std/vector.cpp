#include <iostream>
#include <vector>

using namespace std;

class Entity {
   public:
      float x, y;

   public:
      Entity():
         x(0), y(0) {
            cout << "Default" << endl;
      }

      Entity(float x, float y):
         x(x), y(y) {
            cout << "Created" << endl;
      }

      Entity(const Entity& src):
         x(src.x), y(src.y) {
            cout << "Copy" << endl;
      }
};

ostream &operator<<(ostream &stream, const Entity &e) {
   stream << '(' << e.x << ',' << ' ' << e.y << ')' << ' ';
   return stream;
}

int main(void) {
   vector<Entity> a;
   vector<Entity> b;

   // a.push_back(Entity(1, 2));
   // a.push_back(Entity(3, 4));
   // a.push_back(Entity(5, 6));
   // a.pop_back();

   b.reserve(3);
   b.emplace_back(9, 8);
   b.emplace_back(7, 6);
   b.emplace_back(5, 4);


   for(Entity &e : a) {
      cout << e << endl;
   }

   cout << endl;

   for(Entity &e : b) {
      cout << e << endl;
   }

   // a.clear();
   // b.clear();
   
}