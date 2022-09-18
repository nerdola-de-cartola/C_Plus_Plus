#include "client.hpp"

Client::Client(int id, std::string name, int age, int size, double salary):
   Person(id, name, age, size), salary(salary) {}

Client::~Client() {}

double Client::getSalary() {
   return this->salary;
}

void Client::print() {
   Person::print();
   std::cout << "Salary: " << this->getSalary() << std::endl;
}