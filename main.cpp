#include <iostream>
#include <fstream> // for filewrite
#include "Cow.h"
#include "Sheep.h"

using namespace std;

ofstream myFile; // for filewrite

int main() {
  myFile.open("result.txt");
  
  myFile << "Let's remember our farm animal noises!" << endl;
  myFile << "A cow says: " << Cow::SAYS << endl; // print the value of a static member variable
  myFile << "A sheep says: " << Sheep::SAYS << endl; // print the value of a static member variable
  myFile << endl;

  Cow cow("Moolissa", 5, 1225); // create an object from the Cow class
  Sheep sheep("Dolly", 1, 125); // create an object from the Sheep class

  myFile << "Let's see who is on the farm!" << endl;
  myFile << "We have a " << Cow::getAnimalType() << endl; // call a static member function
  myFile << cow; // use the custom << operator to output an object
  myFile << endl;

  myFile << "We have a " << Sheep::getAnimalType() << endl; // call a static member function
  myFile << sheep; // use the custom << operator to output an object
  myFile << endl;

  myFile << "1 year passes. The animals are getting older and fatter." << endl;

  cow.incrementAge();   // call a member function of an object
  cow.setWeight(1400);  // call a member function of an object

  sheep.incrementAge(); // call a member function of an object
  sheep.setWeight(140); // call a member function of an object

  myFile << cow; // use the custom << operator to output an object
  myFile << endl;

  myFile << sheep; // use the custom << operator to output an object
  myFile << endl;

  myFile << "In the underground barn..." << endl;
  myFile << "Old MacDonald has been experimenting with cloning!" << endl;
  Sheep clone(sheep); // create an object from the Sheep class

  myFile << "Welcome to the farm a " << Sheep::getAnimalType() << " clone." << endl; // call a static member function
  myFile << clone; // use the custom << operator to output an object

  return 0;
}
