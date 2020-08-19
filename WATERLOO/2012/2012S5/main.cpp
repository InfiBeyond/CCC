#include <iostream>
#include <vector>
using namespace std;
struct Block
{
    int x,y;
    bool cat;
    Block(int x, int y)
    {
        this->x = x;
        this->y = y;
        cat = false;
    }
};
void moveMe(int mex, int mey,int x, int y, vector<Block> &cage,int sum = 0)
{
    if(mex == x && mey == y)
    {
        sum++;
    }
    if(cage[(meX-1)*broY+meY-1].cat  == false)
    {
        mex
    }

}
int main()
{
    int broX, broY;
    cin >> broX >> broY;
    vector<Block> cage;
    for(int i = 1; i <= broX; i++)
    {
        for(int j = 1; j <= broY; j++)
        {
            cage.emplace_back(Block{i,j});
        }
    }
    int numCat;
    cin >> numCat;
    int catX,catY;
    for(int i = 0; i < numCat; i++)
      {
          cin >> catX >> catY;
          cage[(catX-1)*broY+catY-1].cat  = true;
      }
      moveMe(broX,broY, &cage);
    return 0;
}
