#include "Person.h"

class Faculty{

public:
  Faculty();
  ~Faculty();

  string getDepartment(string department);
  void setDepartment();

  void ListAdviseeIds();

private:
  string dep;
  //genlinkedlist of advisee list
};
