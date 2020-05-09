#include <iostream>
#pragma once

using namespace std;

class Person{

public:
  Person();
  Person(string name, string level, int id);
  ~Person();

  string getName(string name);
  void setName();

  string getLevel(string level);
  void setLevel();

  int getID(int id);
  void setID();

private:
  string name1;
  string level1;
  int id1;

};
