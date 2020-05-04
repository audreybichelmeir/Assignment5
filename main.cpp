#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

int input = 0;


cout << "1. Print all students and their information (sorted by ascending id #)" << endl;
cout << "2. Print all faculty and their information (sorted by ascending id #)" << endl;
cout << "3. Find and display student information given the students id" << endl;
cout << "4. Find and display faculty information given the faculty id" << endl;
cout << "5. Given a student’s id, print the name and info of their faculty advisor" << endl;
cout << "6. Given a faculty id, print ALL the names and info of his/her advisees." << endl;
cout << "7. Add a new student" << endl;
cout << "8. Delete a student given the id" << endl;
cout << "9. Add a new faculty member" << endl;
cout << "10. Delete a faculty member given the id." << endl;
cout << "11. Change a student’s advisor given the student id and the new faculty id." << endl;
cout << "12. Remove an advisee from a faculty member given the ids" << endl;
cout << "13. Rollback" << endl;
cout << "14. Exit" << endl;

cin >> input;

switch (input) {
case 1 :
break;

case 2:
break;

case 3:
break;

case 4:
break;

case 5:
break;

case 6:
break;

case 7:
break;


case 8 :
break;

case 9 :
break;

case 10 :
break;

case 11 :
break;

case 12 :
break;

case 13 :
break;

case 14 :
break;

default :
cout << "invalid input" << endl;
break;
}

return 0;

// what we need cases then they shoul in the future call classes
}
