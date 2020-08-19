#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> vil;
    double temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        vil.emplace_back(temp);
    }
    sort(vil.begin(),vil.end());
    temp = vil.back();
    for(int i = 1; i < n-1; i++)
    {
        if(temp>=(abs(vil[i+1]-vil[i-1])/2))
        {
            temp = (abs(vil[i+1]-vil[i-1])/2);
        }
    }

    cout << fixed << setprecision(1)<<temp;

    return 0;
}
