#include <iostream>

#define rows 5
#define columns 4

int main(void) {
   int **matrix = new int*[rows];
   for(int i = 0; i < rows; i++) {
      matrix[i] = new int[columns];
   }

   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < columns; j++) {
         std::cout << matrix[i][j];
         if(j != columns-1) std::cout << ", ";
      }

      std::cout << std::endl;
   }

   for(int i = 0; i < rows; i++) {
      delete [] matrix[i];
   }

   delete [] matrix;

   return 0;
}