#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
struct Crystal
{
    int level,x,y;
};
int j = 0;
int posx = 0;
int posy = 0;
bool recurs(Crystal c, int x, int y,int j)
{
    if(j==1)
    {
        if(x==1||x==2||x==3)
            posx = x;
        else
            return false;
        if(y == 1)
        {
            posy == y;
            return true;
        }
        if(x==2 && y == 1)
        {
            posy = y;
            return true;
        }
        else
            return false;
    }
}
bool backRecurs(Crystal c,int i,int x = 0,int y = 0)
{
    x = c.x/pow(5,i);
    y = c.y/pow(5,i);
    if(!recurs(c,x,y,++j))
    {
        return false;
    }
}

int main()
{
    int num;
    cin >> num;
    vector<Crystal> crys;
    int tempL,tx,ty;
    for(int i = 0; i < num; i ++)
    {
        cin >> tempL;
        cin >> tx;
        cin >> ty;
        crys.emplace_back(Crystal{tempL,tx,ty});
    }
    for(int i = 0; i < num; i ++)
    {
        if(crys[i].x/pow(5,crys[i])== 1 || crys[i].x/pow(5,crys[i])== 3)
        {
            if(crys[i].y/pow(5,crys[i])== 0)
                cout << "crystal" << endl;
        }
        else if(crys[i].x/pow(5,crys[i])== 2)
        {
            if(crys[i].y/pow(5,crys[i])== 0 || crys[i].y/pow(5,crys[i])== 1)
                cout << "crystal" << endl;
        }
        else if(backRecurs(crys[i],crys[i].level))
    }

    return 0;
}
