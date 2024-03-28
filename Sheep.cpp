#include "Sheep.h"

// TODO: write your code to initialize the static (const) member variable
const string Sheep::SAYS = "Baa!";
// TODO: write your code of the constructor
Sheep::Sheep(string name, int age, int weight) : name(name), age(age), weight(weight){}

void Sheep::incrementAge(){
  age++;
}

void Sheep::setWeight(int weight){
  this->weight = weight;
}

string Sheep::getAnimalType(){
  return "Sheep";
}

ostream &operator<<(ostream &out, Sheep &sheep){
  out << "Name " << sheep.name << " Age " << sheep.age << " Weight " << sheep.weight;
  return out;
}
// TODO: write your code of the copy constructor

// TODO: write your code of the member functions (incrementAge(), setWeight(int weight), getAnimalType())

// TODO: write your code of the overloaded << operator

