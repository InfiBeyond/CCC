#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    string name[N];
    string part[N];
    string name1;
    string part1;
    getline(cin, name1);
    getline(cin,part1);
    int num = 1;
    int first = 0;
    int second = 0;
    int num1 = 1;
    bool isGood = true;
    for(int i = 0; i <= name1.length()-1; i++)
    {
        if(name1.substr(i,1)== " ")
        {
           name[num] = name1.substr(first,i-first);

           num++;
           first=i+1;
        }
        if(i==name1.length()-1)
        {
            name[N-1] = name1.substr(first,name1.length()-first);
        }
        if(part1.substr(i,1)== " ")
        {
           part[num1] = part1.substr(second,i-second);
           num1++;
           second=i+1;
        }
        if(i==name1.length()-1)
        {
            part[N-1] = part1.substr(second,part1.length()-second);
        }
    }

    for(int i = 1; i < N; i++)
    {
        string partner = part[i];
        if(partner == name[i])
        {
            isGood = false;
            break;
        }
        for(int j = 1; j<=N; j++)
        {
            if(name[j]==partner)
            {
                if(part[j] != name[i])
                {
                   isGood = false;
                   break;
                }
            }
        }
    }
    if(isGood)
    {
        cout<<"good";
    }
    else
    {
        cout<<"bad";
    }

    return 0;
}
