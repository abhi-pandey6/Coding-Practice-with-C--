#include <iostream>
using namespace std;
int main()
{

  int age;
  cout << "Tell me your age" << endl;
  cin >> age;
  switch (age)
  {
    case 18:
      cout << "you are 18";
      break;

    case 22:
      cout << "you are 22";
      break;

    default:
      cout << "No special case" << endl;
      break;
  }
  return 1;
}