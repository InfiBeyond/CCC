#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string temp;
    int s = 0;
    int t = 0;
    for(int i = 0; i < num; i++)
    {
        cin.ignore();
        getline(cin,temp);
        for(auto j: temp)
        {
            if(j == 's' || j == 'S')
                s++;
            else if (j == 't' || j == 'T')
                t++;
        }
    }
    if(t>s)
    {
        cout << "English";
        return 0;
    }
    cout << "French";
    return 0;
}
