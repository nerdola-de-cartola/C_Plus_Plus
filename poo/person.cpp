#include "person.hpp"

Person::Person(int id, std::string name, int age, int size):
   id(id), name(name), age(age), size(size) {
      this->arr = new int [size];
}

Person::~Person() {}

int Person::getId() {
   return this->id;
}

std::string Person::getName() {
   return this->name;
}

int Person::getAge() {
   return this->age;
}

void Person::print() {
   std::cout << "Id: " << this->getId() << std::endl;
   std::cout << "Name: " << this->getName() << std::endl;
   std::cout << "Age: " << this->getAge() << std::endl;
}

void Person::free() {
   delete [] this->arr;
}