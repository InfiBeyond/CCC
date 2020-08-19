#include <iostream>
#include <vector>
using namespace std;
struct Cell
{
    int x,y;
    int contain;
    int val;
    bool visited;
    Cell(int x, int y, int contain)
    {
        this->x = x;
        this->y = y;
        this->contain = contain;
        val = x*y;
        visited = false;
    }
};
bool ans = false;
bool findWay(vector<Cell> room, int m, int n,int x = 1,int y = 1)
{
    int num = room[(x-1)*y+x-1].contain;
    bool noWay = false;
    for(int i = 0; i < m*n; i++)
    {
        if(num == room[i].val && room[i].visited == false)
        {
            cout << num << " " << room[i].val << " " << room[i].x << " " << room[i].y << " " << m << " " << n << endl;
            noWay = true;
            num = room[i].contain;
            if(room[i].x == m && room[i].y == n)
                {
                    ans = true;
                    return true;
                }
            room[i].visited = true;
            findWay(room,m,n,room[i].x,room[i].y);
        }
    }
    if(noWay == false)
        return false;
}
int main()
{
    int m,n;
    cin >> m;
    cin >> n;
    int temp;
    vector<Cell> room;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> temp;
            room.emplace_back(Cell{i,j,temp});
        }
    }
    findWay(room,m,n);
    if(ans)
    {
        cout << "yes";
        return 0;
    }

    cout << "no" << endl;
    return 0;
}
