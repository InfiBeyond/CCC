#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name = "John";
    int Age;
    Age = 56;
    double Age2 = 56.7;
    char grade = 'A';
    bool isHappy = true;
    cout << Age+Age2 ;
    cout << name.find("J",2);
    string name1;
    cout << "Enter your name: ";
    getline(cin, name1);
    cout << "Your name is " << name1 << ".";
    int age;
    cout << "Enter your age: ";
    cin >>age;
    cout << "You are " << age << " years old";
    return 0;
}
