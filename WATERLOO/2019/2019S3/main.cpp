#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
struct grid
{
    bool isEmpty;
    int val = 0;

};

int main()
{
    grid g[3][3];
    string num;
    vector<int> coun = {0,0,0};
    int x = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin >> num;
            if(num == "X")
            {
                g[i][j].isEmpty = 1;
                coun[i]++;
            }
            else
            {
                stringstream geek(num);
                geek >> x;
                g[i][j].val= x;
                g[i][j].isEmpty= 0;

            }
        }

    }
   for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(g[i][j].isEmpty)
            {
                if(!g[i+1][j].isEmpty && !g[i+2][j].isEmpty)
                {
                  g[i][j].val = g[i+1][j].val-(g[i+2][j].val-g[i+1][j].val)/2;
                }
                else if()


            }
        }
    }
    return 0;
}
