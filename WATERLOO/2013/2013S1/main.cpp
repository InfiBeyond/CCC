#include <iostream>
#include <vector>
using namespace std;
bool check(int num)
{
    vector<int> digits;
    int temp = num;
    int len;
    for(int i = 1; i >= 0; i++)
    {
        if(temp/10!=0)
        {
            digits.emplace_back(temp%10);
            temp/=10;
        }
        else
        {
            digits.emplace_back(temp);
            len = i;
            break;
        }
    }
    int now;
    for(int i = 0; i < len-1; i++)
    {
        now = digits[i];
        for(int j = i+1; j < len; j++)
        {
            if(now == digits[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int year;
    cin >> year;
    for(int i = year +1; i > 0; i++)
    {
        if(check(i))
        {
            cout << i;
            break;
        }
    }
    return 0;
}
