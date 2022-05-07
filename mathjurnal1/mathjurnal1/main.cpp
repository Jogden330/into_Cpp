#include <iostream>

using namespace std;

int main()
  {
  int x, y;

  cout << "ENTER two numbers" << endl;

  cin >> x >> y;
  
  int sum = x+ y, dif = x - y, pro = x * y, quo = x / y, rem = x % y;

  cout << "The sume of you're numbers is " << sum << endl;
  cout << "The diffrence is              " << dif << endl;
  cout << "The probuct is                " << pro << endl;
  cout << "The Q-word is                 " << quo << endl;
  cout << "With a remander of            " << rem << endl;

  return 0;
  }