#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "Person.h"
#include "Student.h"
#include "Faculty.h"

using namespace std;


class Menu{

public:
  Menu();
  ~Menu();
  void MenuPrint();
  void MenuError();
  Person *p2;

private:
  bool validAnswer;
  int input;
  string name;
  string level;
  int id;
  string department;

};
