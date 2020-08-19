#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int temp;
    vector<int> ans;
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> temp;
        if(temp == 0)
        {
            ans.pop_back();
        }
        else
        {
            ans.emplace_back(temp);
        }
    }
    int sum = 0;
    for(auto i: ans)
    {
        sum+=i;
    }
    cout << sum;
    return 0;
}
