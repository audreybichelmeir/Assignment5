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

  string getName();
  void setName(string department);

  string getLevel();
  void setLevel(string level);

  int getID();
  void setID(int id);


  string getDepartment();
  void setDepartment(string department);

  void ListAdviseeIds();

private:
  string name1;
  string level1;
  int id1;
  string department1;
  //genlinkedlist of advisee list
};
