#include <iostream>
#include <vector>
using namespace std;
vector<string>vec;

vector<string> findStr(string a, string str = "", int x = 0)
{
    for(int i = x; i < a.length(); i++)
    {
        str = str + a.substr(x,1);
    //    cout << str << endl;
        if(str.length() == a.length())
        {
            vec.emplace_back(str);
            continue;
        }
        findStr(a,str,++x);
        str = "";
    }
    return vec;
}

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int len = a.length();
    int len2 = b.length();
    string temp;
    int ans = 0;
    int maxNum = 1;
   // cout << 1 << endl;
    vector<string> str = findStr(a);
   /* for(auto i: str)
    {
        cout << i << endl;
    }*/
   // cout << 2 << endl;
    for(int i = 0; i < len2-len; i++)
    {
        temp = b.substr(i,len);
        for(auto j: str)
        {
            if(j == temp)
            {
                ans++;
            }
        }
    }
    cout << 2;
    return 0;
}
