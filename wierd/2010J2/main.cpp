#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,n;
    cin >> a >> b >> c >> d >> n;
    cout << a << " " << b << " " << c << " " << d << " " << n << endl;
    int ab=0;
    int cd=0;
    int countnum = 0;
    for(int i = 0; i < n/(a+b); i++)
    {
        ab += (a-b);
        countnum += (a+b);
    };
    if(!(n/(a+b))%2)
    {
        if((n-countnum) > a)
        {
            ab += (a - (n-countnum-a));
        }
        ab += (n-countnum);
    }
    countnum = 0;
    cout << ab << endl;
     for(int i = 0; i < n/(c+d); i++)
    {
        cd += (c-d);
        countnum += (c+d);
    }
    if(!(n/(c+d))%2)
    {
        if((n-countnum) > c)
        {
            cd += (c - (n-countnum-c));
        }
        cd += (n-countnum);
    }
    cout << cd << endl;
    cout << ab << " " << cd << " ";
    if(ab>cd)
        cout << "Nikky";
    else if (ab<cd)
        cout << "Byron";
    else
        cout << "Tied";
    return 0;
}
