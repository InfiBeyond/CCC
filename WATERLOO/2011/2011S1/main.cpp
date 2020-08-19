#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int tcount = 0;
    int scount = 0;
    string sent;
    int len;
    for(int i = 0; i < num; i++)
    {
        cin.ignore();
        getline(cin, sent);
        len = sent.length();
        for(int j = 0; j < len-1; j++ )
        {
            if(sent.substr(j,1) == "s"|| sent.substr(j,1) == "S")
            {
                scount ++;
            }
            else if(sent.substr(j,1) == "t"|| sent.substr(j,1) == "T")
            {
                tcount ++;
            }
        }
    }
    if(scount>=tcount)
    {
        cout<< "French";
        return 0;
    }
    cout << "English" << endl;
    return 0;
}
