#include <iostream>

using namespace std;

class Student{

public:
  Student();
  ~Student();

  string getName(string name);
  void setName();

  string getLevel(string level);
  void setLevel();

  int getID(int id);
  void setID();

  string getMajor(string major);
  void setMajor();

  double getGPA(double gpa);
  void setGPA();

  int getAdvisor(int advisor);
  void setAdvisor();

private:
  //string name;
  //string level;
  //int id;

  string major;
  double gpa;
  int advisor;

};
