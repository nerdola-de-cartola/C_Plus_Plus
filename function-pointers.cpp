#include <iostream>
#include <vector>

template <typename T>
void forEach(std::vector<T> &arr, void(*input_function)(T)) {
   for(T &value : arr) input_function(value);
}

template <typename T>
void sort(std::vector<T> &arr, bool(*sort_function)(T, T)) {
   for(int i = 0; i < arr.size() - 1; i++) {

      int start = i;

      for(int j = i+1; j < arr.size(); j++) {
         if(sort_function(arr[start], arr[j])) start = j;
      }

      if(start != i) {
         T tmp = arr[i];
         arr[i] = arr[start];
         arr[start] = tmp;
      }
   }
}

template <typename T>
bool growing(T a, T b) {
   return (a > b);
}

template <typename T>
void print(T input) {
   std::cout << input << std::endl;
}

int main(void) {
   std::vector<int> list = {1, 4, 5, 2 , 8, 0};

   sort(list, growing);
   forEach(list, print);
}