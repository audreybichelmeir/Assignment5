#include "Menu.h"

Menu::Menu(){
  bool validAnswer = false;
  int input = 0;
  MenuPrint();

}

Menu::~Menu(){

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

  while (validAnswer == false) {

    cin >> input;

    switch (input) {
    case 1 :
    cout << "Print all students and their information (sorted by ascending id #)" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 2:
    cout << "Print all faculty and their information (sorted by ascending id #)" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 3:
    cout << "Find and display student information given the students id" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 4:
    cout << "Find and display faculty information given the faculty id" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 5:
    cout << "Given a student’s id, print the name and info of their faculty advisor" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 6:
    cout << "Given a faculty id, print ALL the names and info of his/her advisees" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 7:
    cout << "Add a new student" << endl;
    cout << endl;
    validAnswer = true;
    break;


    case 8 :
    cout << "Delete a student given the id" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 9 :
    cout << "Add a new faculty member" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 10 :
    cout << "Delete a faculty member given the id" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 11 :
    cout << "Change a student’s advisor given the student id and the new faculty id" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 12 :
    cout << "Remove an advisee from a faculty member given the ids" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 13 :
    cout << "Rollback" << endl;
    cout << endl;
    validAnswer = true;
    break;

    case 14 :
    cout << "Exit" << endl;
    cout << endl;
    validAnswer = true;
    break;

    default :
    MenuError();
    validAnswer = false;
    // cout << "Invalid input" << endl;
    // cout << "Please enter a number between 1 and 14" << endl;
    // cin >> input;
    // cout << endl;
    // //continue;
    break;
    }
  }
}
