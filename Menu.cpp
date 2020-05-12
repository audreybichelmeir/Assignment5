#include "Menu.h"
#include "Faculty.h"

Menu::Menu(){
  bool validAnswer = true;
  int input = 0;

  name = " ";
  level = " ";
  id = 0;
  department = " ";


  MenuPrint();

}

Menu::~Menu(){

}

void Menu::FileReaderStudents(){

}

void Menu::FileReaderFaculty(){

}

void Menu::PrintAllStudents(){

}

void Menu::PrintAllFaculty(){

}

void Menu::FindStudentGivenID(){

}

void Menu::FindFacultyGivenID(){

}

void Menu::AddStudent(){
  cout << "Name: " << endl;
  cin >> name;
  cout << "Level: " << endl;
  cin >> level;
  cout << "ID: " << endl;
  cin >> id; // need an if statement if they give a letter
  cout << "Major: " << endl;
  cin >> major;
  cout << "GPA: " << endl;
  cin >> gpa;
  cout << "Advisor (type ID): " << endl;
  cin >> advisor;

}

void Menu::AddFaculty(){
  cout << "Name: " << endl;
  cin >> name;
  cout << "Level: " << endl;
  cin >> level;
  cout << "ID: " << endl;
  cin >> id; // need an if statement if they give a letter
  cout << "Department: " << endl;
  cin >> department;

  Faculty *f1 = new Faculty();
  Faculty(name, level, id, department);
  delete f1;

}

void Menu::StudentIDFindAdvisor(){

}

void Menu::FacultyIDFindAdvisees(){

}

void Menu::DeleteStudentGivenID(){

}

void Menu::DeleteFacultyGivenID(){

}

void Menu::ChangeAdvisorGivenID(){

}

void Menu::RemoveAdviseeGivenID(){

}

void Menu::RollBack(){

}


void Menu::MenuError(){
  cout << "Invalid input" << endl;
  cout << "Please enter a number between 1 and 14" << endl;
  MenuPrint();

}

void Menu::MenuPrint(){

  cout << "1. Print all students and their information (sorted by ascending id #)" << endl;
  cout << "2. Print all faculty and their information (sorted by ascending id #)" << endl;
  cout << "3. Find and display student information given the students id" << endl;
  cout << "4. Find and display faculty information given the faculty id" << endl;
  cout << "5. Given a student’s id, print the name and info of their faculty advisor" << endl;
  cout << "6. Given a faculty id, print ALL the names and info of his/her advisees" << endl;
  cout << "7. Add a new student" << endl;
  cout << "8. Delete a student given the id" << endl;
  cout << "9. Add a new faculty member" << endl;
  cout << "10. Delete a faculty member given the id" << endl;
  cout << "11. Change a student’s advisor given the student id and the new faculty id" << endl;
  cout << "12. Remove an advisee from a faculty member given the ids" << endl;
  cout << "13. Rollback" << endl;
  cout << "14. Exit" << endl;

  while (validAnswer) {

    cin >> input;

    switch (input) {
    case 1 :
    cout << "Print all students and their information (sorted by ascending id #)" << endl;
    break;

    case 2:
    cout << "Print all faculty and their information (sorted by ascending id #)" << endl;
    break;

    case 3:
    cout << "Find and display student information given the students id" << endl;
    break;

    case 4:
    cout << "Find and display faculty information given the faculty id" << endl;
    break;

    case 5:
    cout << "Given a student’s id, print the name and info of their faculty advisor" << endl;
    break;

    case 6:
    cout << "Given a faculty id, print ALL the names and info of his/her advisees" << endl;
    break;

    case 7:
    cout << "Add a new student" << endl;
    AddStudent();
    break;


    case 8 :
    cout << "Delete a student given the id" << endl;
    break;

    case 9 :
    cout << "Add a new faculty member" << endl;
    AddFaculty();
    break;

    case 10 :
    cout << "Delete a faculty member given the id" << endl;
    break;

    case 11 :
    cout << "Change a student’s advisor given the student id and the new faculty id" << endl;
    break;

    case 12 :
    cout << "Remove an advisee from a faculty member given the ids" << endl;
    break;

    case 13 :
    cout << "Rollback" << endl;
    break;

    case 14 :
    cout << "Exit" << endl;
    validAnswer = false;
    break;

    default :
    MenuError();
    break;
    }
  }
}
