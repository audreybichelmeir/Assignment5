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
  Faculty *f;

private:
  bool validAnswer;
  int input;

  //student & faculty
  string name;
  string level;
  int id;

  //student
  string major;
  double gpa;
  int advisor;

  //faculty
  string department;

};
