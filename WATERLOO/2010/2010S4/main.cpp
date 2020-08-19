#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool compare(vector<int>n1, vector<int>n2)
{
    return n1.back()<n2.back();
}

struct Pen
{
    int pen;
    int edge;
    int mini;
    vector<vector<vector<int>>> side;
    Pen(int pen, vector<vector<int>> num)
    {
        pen = pen;
        for(int j = 0; j < pen; j++)
        {
            edge = num[j][0];
            for(int i = 0; i < edge; i++)
            {
                side.emplace_back(vector<int>());
                if(i < edge-1)
                side[j][i] = {num[j][i+1],num[j][i+2],num[j][i+edge]};
                side[j][i] = {num[j][1],num[j][i],num[j][i+edge]};
            }
            sort(side[j].begin(),side[j].end(),compare);
            if(side[j].back().back() < mini || j == 0)
                mini = side[j].back().back();

        }
    }
};

int main()
{
    int m;
    cin >> m;
    int temp;
    vector<vector<int>> num;
    vector<int> trash;
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        trash.emplace_back(temp);
        for(int j = 0;j < (2*temp); j++)
        {
            cin >> temp;
            trash.emplace_back(temp);
        }
        num.emplace_back(trash);
        trash.clear();
    }
    Pen p {m, num};
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        ans += p.side[i][0].back();
    }
     ans -= p.mini;
    cout << ans << endl;
    return 0;
}
