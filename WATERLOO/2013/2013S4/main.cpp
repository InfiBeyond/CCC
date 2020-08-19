#include <iostream>
#include <vector>
using namespace std;
void findA(int a, int b, vector<vector<int>> &height,int num = 0, int in = 0)
{
    if(heigth[num][in] == a)
    {
        if(in == 0)
        {
            findA(height[num][1],b,height,0,0);

        }
    }
}
int main()
{
    vector<vector<int>> height;
    vector<int> temp;
    int total;
    int before;
    cin >> total;
    cin >> before;
    int temp1, temp2;
    for(int i = 0; i< before; i++)
    {
        temp.emplace_back(temp1);
        temp.emplace_back(temp2);
        height.emplace_back(temp);
        temp.clear();
    }
    int a,b;
    cin >> a >> b;
    findA(a,b,&height);
}


