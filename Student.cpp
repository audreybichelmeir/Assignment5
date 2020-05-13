#include "Student.h"
#include "Menu.h"

Student::Student(){
  name1 = " ";
  level1 = " ";
  id1 = 0;
  major1 = " ";
  gpa1 = 0;
  advisor1 = 0;
}

Student::Student(string name, string level, int id, string major, double gpa, int advisor){

  cout << "Name: " << name1 << " Level: " << level1 << " ID: " << id1 << " Major: " << major1 << " GPA: " << gpa1 << " Advisor: " << advisor1 << endl;
  Menu *m2 = new Menu();
  m2->MenuPrint();
  delete m2;
}

/*
Student::Student(string major){

  //cout << "Name: " << name << " Level: " << level << " ID: " << id << " Department: " << department << endl;
  cout << "work" << endl;
}
*/
Student::~Student(){

}

string Student::getName(){
  return name1;
}

void Student::setName(string name){
  name = name1;
}

string Student::getLevel(){
  return level1;
}

void Student::setLevel(string level) {
  level = level1;
}

int Student::getID(){
  return id1;
}

void Student::setID(int id){
  id = id1;
}

string Student::getMajor(){
  return major1;
}

void Student::setMajor(string major){
  major = major1;
}

double Student::getGPA(){
  return gpa1;
}

void Student::setGPA(double gpa) {
  gpa = gpa1;
}

int Student::getAdvisor(){
  return advisor1;
}

void Student::setAdvisor(int advisor){
  advisor = advisor1;
}
