#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Student{

public:
  Student();
  Student(string name, string level, int id, string major, double gpa, int advisor);
  ~Student();

  string getName();
  void setName(string name);

  string getLevel();
  void setLevel(string level);

  int getID();
  void setID(int id);

  string getMajor();
  void setMajor(string major);

  double getGPA();
  void setGPA(double gpa);

  int getAdvisor();
  void setAdvisor(int advisor);

private:
  string name1;
  string level1;
  int id1;

  string major1;
  double gpa1;
  int advisor1;

};
