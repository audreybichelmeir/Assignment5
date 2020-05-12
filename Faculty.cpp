#include "Faculty.h"
#include "Menu.h"


Faculty::Faculty(){
  name1 = " ";
  level1 = " ";
  id1 = 0;
  dep1 = " ";
}

Faculty::Faculty(string name, string level, int id, string department){

  cout << "Name: " << name << " Level: " << level << " ID: " << id << " Department: " << department << endl;
  Menu *m1 = new Menu();
  m1->MenuPrint();
  delete m1;

}

Faculty::~Faculty(){

}

string Faculty::getName(string name){

}

void Faculty::setName(){

}

string Faculty::getLevel(string level){

}

void Faculty::setLevel(){

}

int Faculty::getID(int id){

}

void Faculty::setID(){

}


string Faculty::getDepartment(string department){

}

void Faculty::setDepartment(){

}
