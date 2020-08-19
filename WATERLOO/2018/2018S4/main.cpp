#include <iostream>

using namespace std;


int tree(int branch, int weight,int ans = 0)
{
    int temp = weight/branch;
    if(branch <= 1)
        return ans;
    if(temp > 2)
    {
        ans += tree(temp, temp, ans);
    }
    else
    {
        ans++;
    }
    ans += tree(--branch, weight, ans);


}


int main()
{
    int w;
    cin >> w;

    cout << tree(w,w);
    return 0;
}
