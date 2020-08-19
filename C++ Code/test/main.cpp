#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
     string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int len = str.length();
  string newStr = "";
  for(int i = 0; i <= len ; i++)
  {
    for(int f = 0; f <= alpha.length()-1; f++)
    {
      int k = 0;
      if(str[i]==alpha[f])
      {
        k= f+1;
        if(f == 25 || f == 51)
        {
          k = 26;
        }
        else if( alpha.substr(f+1,1) == "e"||alpha.substr(f+1,1) == "i"||alpha.substr(f+1,1) == "o"||alpha.substr(f+1,1) == "u")
        {
          k = f+27;
        }
         newStr += alpha[k];
         break;
      }
      else if (f == 51)
      {
        newStr += str[i];
      }
    }
  }
  cout<<newStr;
  return 0;

}
