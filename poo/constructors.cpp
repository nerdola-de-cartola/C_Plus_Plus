#include <iostream>

using namespace std;

class Dot {
public:
   double x;
   double y;
public:
   Dot();
   Dot(double x, double y);
   void print();
};

Dot::Dot() {
   this->x = 0;
   this->y = 0;
}

Dot::Dot(double x, double y) {
   this->x = x;
   this->y = y;
}

void Dot::print() {
   cout << '(' << this->x << ", " << this->y << ')' << endl;
}

int main(void) {
   Dot A, B(10.25, -7.35);

   A.print();
   B.print();

   return 0;
}