#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Faculty{

public:
  Faculty();
  Faculty(string name, string level, int id, string department);
  ~Faculty();

  string getName(string name);
  void setName();

  string getLevel(string level);
  void setLevel();

  int getID(int id);
  void setID();


  string getDepartment(string department);
  void setDepartment();

  void ListAdviseeIds();

private:
  string name1;
  string level1;
  int id1;
  string dep1;
  //genlinkedlist of advisee list
};
