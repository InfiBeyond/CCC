#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
int separate(vector<int> h, int n)
{
    if(n == 1)
    {
        return(ceil(h.back()-h.begin())/2.0));
    }
    int len = h.size();
    vetor<int> ans;
    for(int j =0; j < len-n-1; j++)
    {
        ans.emplace_back(ceil(h[j]-h.begin())/2.0)+separate(h,--n));
    }
    sort(ans.begin(),ans.end());
    return ans[0];

}


int main()
{
    int num;
    cin >> num;
    vector<int> h;
    int temp;
    int fire;
    for(int i = 0; i < num; i++)
    {
        cin >> tmep;
        h.emplace_back(temp);
    }
    cin >> fire;
    sort(h.begin(),h.end());
    cout << separate(h,fire);

    return 0;
}
