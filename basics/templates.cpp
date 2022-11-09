#include <iostream>

using namespace std;

template<typename T>
void print(T input) {
   cout << input << endl;
}

template<typename T, int max_capacity>
class Array {
   protected:
      T arr[max_capacity];
      int actual_size;

   public:
      Array():
         actual_size(0) {}

      T &operator[]( int index) {
         // print("Index check");

         if(index >= capacity()) {
            print("overcapacity error");
            exit(1);
         }

         return arr[index];
      }

      void add(T new_value, int index) {
         (*this)[index] = new_value;
         actual_size++;
      }

      void add(T new_value) {
         arr[this->size() - 1] = new_value;
         actual_size++;
      }

      int size() {
         return actual_size;
      }

      int capacity() {
         return max_capacity;
      }

};

template<typename T, int n>
ostream &operator<<(ostream &stream, Array<T, n> &arr) {
   for(int i = 0; i < arr.size() - 1; i++) {
      stream << arr[i] << ", ";
   }

   stream << arr[arr.size() - 1];
   return stream;
}


int main(void) {
   print('a');
   print(2);
   print(2.5);
   print(string("Alice"));

   Array<string, 10> names;

   names.add("Matheus", 0);
   names.add("Lucas", 1);
   names.add("Nome errado", 2);
   names[3] = "Morais";
   names.add("Pires");

   print(names);
}