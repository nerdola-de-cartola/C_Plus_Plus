#include <iostream>

class Entity {
   public:
      int x;
      int y;

   public:
      int * arrayConvert() {
         return (int*)this;
      }
};

int main(void) {
   Entity my_entity = {2, 22};
   int *my_array;

   my_array = my_entity.arrayConvert();

   std::cout << my_array[0] << ", " << my_array[1] << std::endl;

   return 0;
}