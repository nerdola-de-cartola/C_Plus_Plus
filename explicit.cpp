#include <iostream>

using namespace std;

class Game {
   private:
      int score;
      string name;

   public:
      explicit Game():
         score(0), name("Undefined") {
            cout << "Undefined" << endl;
      }

      explicit Game(int score):
         score(score) {
            cout << "Score" << endl;
      }

      explicit Game(string name):
         name(name) {
            cout << "Name" << endl;
      }
};

int main(void) {

   Game g0;
   // Game g1 = 12; conversão implicita para Game(12) 
   // Game g2 = string("GTA 6"); conversão implícita para Game("GTA 6")
   Game g3(22);
   Game g4("Lol");
   Game g5(string("Lol"));


   return 0;
}