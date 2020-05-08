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

private:
  bool validAnswer;
  int input;

};
