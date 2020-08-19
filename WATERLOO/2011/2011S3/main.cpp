#include <iostream>
#include <vector>
using namespace std;
struct Crystal
{
    int level,x,y;
};
ring test(Crystal c, int l)
{
    int x = c.x;
    int y = c.y;
    for(int i = 1; i < l; i++)
    {
        if(x == 0 && y == 0)
        {
            continue;
        }
        else if (y == 0)
        {
            x/=5.0;
            continue;
        }
        else if (x == 0)
        {
            y/=5.0

        }
        x/=5.0;
        y/=5.0;
    }
    if(((x == 1 ||x == 2||x == 3)&&(y == 0)) || (x == 2 && y == 1))
    {
       return "crystal";
    }
    if(((x == 1+0.2*pow(5,l-1) ||x == 2+0.2*pow(5,l-1)||x == 3+0.2*pow(5,l-1))&&(y == 0+0.2*pow(5,l-1))) || (x == 2+0.2*pow(5,l-1) && y == 1+0.2*pow(5,l-1)))
    {
       return "crystal";
    }

        return "empty";

}
int main()
{
    int n;
    cin >> n;
    Crystal temp;
    vector<string> ans;
    for(int i = 0; i < n; i++)
    {
        cin >> temp.level >> temp.x >> temp.y;
        ans.emplace_back(test(temp.x,temp.y,n,c));
    }
    for(auto i: ans)
    {
       cout << i << endl;
    }
    return 0;
}


