#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<char> b;
   string temp;
   cin >> temp;
   vector<char> a (temp.begin(),temp.end());
   char wild;
   int len = temp.length();
   for(int i = 0; i < len; i++)
   {
       cin >> wild;
       b.emplace_back(wild);
   }
   int coun = 0;
   bool compare = false;
   for(int i = 0; i < b.size(); i++)
   {
       for(int j = 0; j < a.size(); j++)
       {
            if(b[i] == '*')
            {
                coun ++;
                compare = true;
                j = len;
            }
            else if(a[j] == b[i])
            {
                a.erase(a.begin()+j,a.begin()+j+1);
                b.erase(b.begin()+i,b.begin()+i+1);
                i--;
                compare = true;
                j = len;
            }
       }
       if(compare == false)
       {
            cout << "N";
            return 0;
       }
       compare = false;
   }
   if(a.size() == b.size())
   {cout << "A";}
   else
   {cout << "N";}
    return 0;
}


