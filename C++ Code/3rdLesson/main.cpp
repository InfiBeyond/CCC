#include <iostream>

using namespace std;

class Book
{
  public:
      string title;
      string author;
      int pages;

};
int main()
{
    Book book1;
    book1.title = "harry potter";
    book1.author  = "J.K. Rowling";
    book1.pages  = 500;
    // addresses of values - POINTERS
    int age = 19;
    //int *pAge = &age;
   // cout << *pAge;
    double gpa = 2.7;
    string name = "Mike";
    //cout << &age;
   //cout << pAge;
    return 0;
}
