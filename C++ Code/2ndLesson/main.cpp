#include <iostream>

using namespace std;

// Functions. if & if else statements, loops(for, while, do while)
string sayHi(string name, string name2)
{
    string sent  = "Hello " + name + ". You are the sister of " + name2 + ". " ;
    return sent;
}

int main()
{
//FUNCTION
  cout <<sayHi ("Mike", "Elsa");
  cout <<sayHi ("Elsa", "Mike");
  string me  = "my name";
  cout << me.length();
  bool isHappy, isTall  = true;
  if(isTall && isHappy) //and
  {
      cout << "you are happy and tall";
  }
  else if(isHappy || isTall) //or
  {
      cout << "you are happy or tall";
  }
  else
  {
      cout << "You are unhappy and short";
  }

  int age = 10;
  if (age >= 60)
  {
      cout << "you are old.";
  }
  int num = 0;

  //while loops
  while (num <= 10)
  {
      cout << "while loop" << endl;
      num++;
  }
  //for loops
  for(int i = 0; i <= 10; i++)
  {
      cout << i << endl;
  }
  //do-while loops
  do
  {
      cout<<num<<endl;
      num++;
  }
  while(num<=20);
  return 0;
}
