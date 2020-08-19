#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int day = n/m;
    if((double)n/m > n/m)
        day ++;
    vector<int> val;
    int temp;
    for(int i = 0; i < n; i ++)
    {
        cin >> temp;
        val.emplace_back(temp);
    }
    vector<int>sum;
    int sum = 0;
    for(int i = 0; i < n-day; i++)
    {
        for(int j = i; j <n-day+1; j++)
        {
            for(int k = i; k < n);
        }
    }
    return 0;
}
