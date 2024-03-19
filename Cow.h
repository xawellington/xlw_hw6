#ifndef COW_H__
#define COW_H__
#include <ostream>
#include <string>

using namespace std;

class Cow {
  /**
   * Overloaded << operator for the Cow class
   * friend allows for access to private member variables
   */
  friend ostream &operator<<(ostream &out, Cow &cow);

public:
  /**
   * Constructor
   * @param name - name of the cow
   * @param age - initial age of the cow
   * @param weight - initial weight of the cow
   */
  Cow(string name, int age, int weight);

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
   * @return "Cow"
   */
  static string getAnimalType();

  /**
   * For cow = "Moo!", set this in cpp file
   */
  static const string SAYS;

private:
  const string name;
  int age;
  int weight;
};

#endif
