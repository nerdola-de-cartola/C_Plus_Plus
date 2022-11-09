#include <iostream>

using namespace std;

int state = 1;
char mode = 'I';

int main(void) {
   // int action;
   // if(state == 1) action = 1;
   // else action = 2;

   int action = state == 1 ? 1 : 2;

   // string name;
   // if(mode == 'I') name = "Insert";
   // else name = "Menu";

   string name = mode == 'I' ? "Insert" : "Menu";


   return 0;
}