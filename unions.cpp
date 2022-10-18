#include <iostream>

struct Vector2 {
   float x, y;
};

struct Vector4 {
   union {
      struct {
         float x, y, z, w;

      };

      struct {
         Vector2 a, b;
      };
   };
};

void printV4(Vector4 v) {
   using namespace std;

   cout <<  v.x << ", ";
   cout <<  v.y << ", ";
   cout <<  v.z << ", ";
   cout <<  v.w << endl;
}

void printV2(Vector2 v) {
   using namespace std;

   cout <<  v.x << ", ";
   cout <<  v.y << endl;
   
}

int main(void) {
   Vector4 v = {0.5, 0.25, 0.125, 0.0625};

   printV4(v);

   std::cout << std::endl;

   printV2(v.a);
   printV2(v.b);

   return 0;
}