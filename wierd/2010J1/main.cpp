#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int countNum = 0;
    for(int i = 0; i <= n/2; i++)
    {
        if(i <= 5 && n-i <= 5)
            countNum ++;
    }
    cout << countNum;
    return 0;
}
