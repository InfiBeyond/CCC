#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int coun = 0;
    for(int i = 1; i < num-2; i++)
    {
        for(int j = i+1; j < num-1; j++)
        {
            for(int k = j+1; k < num; k++)
            {
                coun++;
            }
        }
    }
    cout<<coun;

    return 0;
}
