#include "Faculty.h"
#include "Menu.h"


Faculty::Faculty(){
  name1 = " ";
  level1 = " ";
  id1 = 0;
  department1 = " ";
}

Faculty::Faculty(string name, string level, int id, string department){

  cout << "Name: " << name1 << " Level: " << level1 << " ID: " << id1 << " Department: " << department << endl;
  Menu *m1 = new Menu();
  m1->MenuPrint();
  delete m1;

}

Faculty::~Faculty(){

}

string Faculty::getName(){

//name1 = name;
return name1;

}

void Faculty::setName(string name){
name = name1;
//return name1;
}

string Faculty::getLevel(){

  //level1 = level;
  return level1;

}

void Faculty::setLevel(string level){

  level1 = level;
  //return level1;
}

int Faculty::getID(){

//id1 = id;
return id1;
}

void Faculty::setID(int id){
  id1 = id;
  //return id1;

}


string Faculty::getDepartment(){

//dep1 = department;
return department1;

}

void Faculty::setDepartment(string department){

  department1 = department;
//return dep1;

}
