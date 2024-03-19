#ifndef SHEEP_H__
#define SHEEP_H__
#include <ostream>
#include <string>

using namespace std;

class Sheep {
  /**
   * Overloaded << operator for the Sheep class
   * friend allows for access to private member variables
   */
  friend ostream &operator<<(ostream &out, Sheep &sheep);

public:
  /**
   * Constructor
   * @param name - name of the sheep
   * @param age - initial age of the sheep
   * @param weight - initial weight of the sheep
   */
  Sheep(string name, int age, int weight);

  /**
   * Copy Constructor
   * @param sheep - sheep object to copy
   */
  Sheep(Sheep &sheep); 

  /**
   * Add 1 to the age
   */
  void incrementAge();

  /**
   * Set the weight
   * @param weight - new weight 
   */
  void setWeight(int weight);

  /**
   * Example usage of a static function
   * @return "Sheep"
   */
  static string getAnimalType();

  /**
   * For sheep = "Baa!", set this in cpp file
   */
  static const string SAYS;

private:
  const string name;
  int age;
  int weight;
};

#endif
