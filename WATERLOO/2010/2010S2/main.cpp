#include <iostream>
#include <vector>
using namespace std;
struct Num
{
    string name;
    string pos;
};

int main()
{
    int l;
    cin >> l;
    string n;
    string p;
    vector<Num> num;
    string code;
    for(int i = 0; i<l; i++)
    {
        cin >> n;
        cin >> p;
        num.emplace_back(Num{n,p});
    }
    cin >> code;
    int beg = 0;
    int en = 0;
    int len = code.length();
    int len1 = num.size();
    string ans = "";
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len1; j++)
        {
            if(code.substr(beg,i-beg+1)==(num[j].pos))
                {
                    ans += num[j].name;
                    beg = i+1;
                    j = len1;
                }
        }
    }
    cout << ans <<endl;
    return 0;
}
