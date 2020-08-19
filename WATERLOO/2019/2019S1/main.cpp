#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> num = {{1,2},{3,4}};
void printVector(int h, int v)
{
    if(h<=0 && v<=0)
    {
        for(auto i: num)
        {
            for(auto j : i)
                cout<< j << " ";
            cout << endl;
        }
        return;
    }
    if(h!=0)
    {
        swap(num[0][0],num[1][0]);
        swap(num[0][1],num[1][1]);
    }
    if(v!=0)
    {
        swap(num[0][0],num[0][1]);
        swap(num[1][0],num[1][1]);
    }
    printVector(--h,--v);

}

int main()
{
    string let;
    getline(cin, let);
    int len = let.length();
    int h;
    int v;
    for(char i : let)
    {
        if(i=='H')
            h++;
        if(i=='V')
            v++;
    }
    h%=2;
    v%=2;
    printVector(h,v);
    return 0;
}
