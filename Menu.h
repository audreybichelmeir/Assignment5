#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


class Menu{

public:
  Menu();
  ~Menu();

  void MenuPrint();
  void MenuError();

  void FileReaderStudents(); //general
  void FileReaderFaculty(); //general

  void PrintAllStudents(); //case 1
  void PrintAllFaculty(); // case 2

  void FindStudentGivenID(); //case 3
  void FindFacultyGivenID(); //case 4

  void AddStudent(); // case 7
  void AddFaculty(); //case 9

  void StudentIDFindAdvisor(); //case 5
  void FacultyIDFindAdvisees(); //case 6

  void DeleteStudentGivenID(); // case 8
  void DeleteFacultyGivenID(); // case 10

  void ChangeAdvisorGivenID(); //case 11
  void RemoveAdviseeGivenID(); //case 12

  void RollBack(); // case 13


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
