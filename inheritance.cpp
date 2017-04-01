#include <iostream>

class myClass     // Creates a class titled myClass with a public section and a private section.
{
public:
  void setMyVariable();
  int getMyVariable();
private:
  int myVariable;     // This private member variable should never be inherited.
};

class yourClass : public myClass {};    // Creates a sub-class of myClass that inherits all the public/protected members into  the
// public section of yourClass. This should only inherit setMyVariable()
// and getMyVariable() since myVariable is private. This class does not over-ride any
// functions so it should be using the myClass version upon each call using a yourClass
// object. Correct?

int main()
{
  myClass myObject;           // Creates a myClass object called myObject.
  yourClass yourObject;       // Creates a yourClass object called yourObject
  yourObject.setMyVariable();
  myObject.setMyVariable(); // Calls setMyVariable() through yourObject. This in turn calls the myClass version of it    because
  // there is no function definition for a yourClass version of this function. This means that this
  // can indeed access myVariable, but only the myClass version of it (there isn't a yourClass
  // version because myVariable is never inherited).

  std::cout << yourObject.getMyVariable() << std::endl;   // Uses the yourClass version of getMyVariable() which in turn
  // calls the myClass version, thus it returns the myClass myVariable
  // value. yourClass never has a version of myVariable Correct?

  std::cout << myObject.getMyVariable() << std::endl;     // Calls the myClass version of getMyVariable() and prints myVariable.

  return 0;
}

void myClass::setMyVariable()
{
  myVariable = 15;        // Sets myVariable in myClass to 15.
}

int myClass::getMyVariable()
{
  return myVariable;
}