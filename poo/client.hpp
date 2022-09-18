#include "person.hpp"

class Client : public Person {
   private:
      double salary;
   public:
      Client(int id, std::string name, int age, int size, double salary);
      ~Client();
   double getSalary();
      void print();
};

