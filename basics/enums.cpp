#include <iostream>

namespace Time {
   enum WeekDay : char {
      Mon, Tue, Wed, Thu, Fri, Sat, Sun
   };  
}


using namespace std;

int main(void) {
   Time::WeekDay today;

   today = Time::Mon;
   today = Time::Tue;
   today = Time::Wed;
   today = Time::Thu;
   today = Time::Fri;
   today = Time::Sat;
   today = Time::Sun;

   // today = 99; Error

   cout << "Today is: " << today << endl;

   return 0;
}