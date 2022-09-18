#include <string>
#include <iostream>

class Person {
   protected:
      int id;
      std::string name;
      int age;
      int *arr;
      int size;
   public:
      Person(int id, std::string name, int age, int size);
      ~Person();
      int getId();
      std::string getName();
      int getAge();
      void print();
      void free();
};

