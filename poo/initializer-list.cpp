#include <iostream>
#include <string>

using namespace std;

class Player {
   protected:
      int x;
      int y;

   public:
      Player():
         x(0), y(0) {
            cout << "Player default" << endl;
      }

      Player(int x, int y):
         x(x), y(y) {
            cout << "Player with " << x << " and " << y << endl;
      }
};

class Game {
   protected:
      string name;
      Player p;

   public:
      Game():
         name("Undefined"), p() {}

      Game(string name, int x, int y):
         name(name), p(x, y) {}
};

int main(void) {
   Game my_game = Game("GTA 6", 19, 20);
   Game other_game;

   return 0;
}