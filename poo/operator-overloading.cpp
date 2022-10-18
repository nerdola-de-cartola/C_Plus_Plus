#include <iostream>

using namespace std;

class Vector {
   public:
      double x;
      double y;

   public:
      Vector(double x, double y):
         x(x), y(y) {}

      Vector add(const Vector &v) const {
         return Vector(this->x + v.x, this->y + v.y);
      }

      Vector subtract(const Vector &v) const {
         return Vector(this->x - v.x, this->y - v.y);
      }

      Vector operator+(const Vector &v) const {
         return this->add(v);
      }

      
      Vector operator-(const Vector &v) const {
         return this->subtract(v);
      }

      bool operator==(const Vector &v) const {
         return (this->x == v.x && this->y == v.y);
      }

      
      bool operator!=(const Vector &v) const {
         return !(*this == v);
      }

      // void print() {
      //    cout << *this << endl;
      // }
};

ostream &operator<<(ostream &stream, const Vector &v) {
   stream << '(' << v.x << ',' << ' ' << v.y << ')' << ' ';
   return stream;
}

int main(void) {
   Vector a(15, -25);
   Vector b(5, 13);

   Vector c = a + b;
   // c.print();
   cout << c << endl;
   
   c = a - b;
   // c.print();
   cout << c << endl;

   if(a == b) cout << "Equal" << endl;
   else cout << "Not Equal" << endl;

   return 0;
}