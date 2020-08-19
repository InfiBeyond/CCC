#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n ;
    cin >> k;
    int day = ceil(n/k);
    vector<vector<int>>combo;
    int arr[n];
    int len;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(i>k||(n-i)>k)
        {
            continue;
        }
        len++;
        vector<int> temp = {i,n-i};
        combo.emplace_back(temp);
    }
    int maz =0;
    int ans =0;
    for(int i = 0; i<len; i++)
    {
            sort(arr,arr+combo[i][0]);
            cout << arr[combo[i][0]-1]<< endl;
            ans+=arr[combo[i][0]-1];
            cout << ans;
            sort(arr+combo[i][0],arr+combo[i][1]);
              cout << arr[n-1]<< endl;
            ans+=arr[n-1];

            cout << ans;
            if(i = 0)
            maz = ans;

            if(ans>maz)
                maz = ans;
            ans = 0;

    }
    cout << maz;


}
