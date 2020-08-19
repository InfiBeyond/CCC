#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    vector<int> tide;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        tide.emplace_back(temp);
    }
    sort(tide.begin(),tide.end());
    int low = ceil(n/2);
    for(int i = low-1; i >= 0; i--)
    {
       cout << tide[i] << " ";
       if(low < n)
       {
           cout << tide[low] << " ";
       }
       low++;
    }

    return 0;
}
