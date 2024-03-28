#include "Cow.h"

const string Cow::SAYS = "Moo!";

Cow::Cow(string name, int age, int weight) : name(name), age(age), weight(weight){}

// TODO: write your code of the member functions (incrementAge(), setWeight(int weight), getAnimalType())
void Cow::incrementAge(){
  age++;
}

void Cow::setWeight(int weight){
  this->weight = weight;

string Cow::getAnimalType(){
  return "Cow";
}

// TODO: write your code of the overloaded << operator
ostream &operator<<(ostream &out, Cow &cow){
    out<<"Name: " << cow.name << " Age: " << cow.age << " Weight: " << cow.weight;
  return out;
}
