#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

template<typename T>
void print(std::vector<T> arr) {
   for(T &value : arr) {
      std::cout << value << std::endl;
   }

   std::cout << std::endl;
}
 
int main(void) {
   using namespace std;

   vector<int> arr = {2, 7, 0, 3 , 6, 8, 4};

   sort(arr.begin(), arr.end());

   print(arr);

   sort(arr.begin(), arr.end(), greater<int>());

   print(arr);

   sort(arr.begin(), arr.end(),
      [](int a, int b) {
         return (a > b);
      }
   );

   print(arr);

   vector<char> str = {'A', '!', 'b', '3' , 't', '(', 'G', 'H', 'T', 'a', '9'};

   sort(str.begin(), str.end(),
      [](char a, char b) {
         int a_points, b_points;

         if(a >= '!' && a <= '/') a_points = 4;
         else if(a >= 'A' && a <= 'Z') a_points = 3;
         else if(a >= '0' && a <= '9') a_points = 2;
         else if(a >= 'a' && a <= 'z') a_points = 1;
         else a = 0;

         if(b >= '!' && b <= '/') b_points = 4;
         else if(b >= 'A' && b <= 'Z') b_points = 3;
         else if(b >= '0' && b <= '9') b_points = 2;
         else if(b >= 'a' && b <= 'z') b_points = 1;
         else b = 0;

         if(a_points == b_points) return (a < b);
         return (a_points > b_points);
      }
   );

   print(str);

   return 0;
}