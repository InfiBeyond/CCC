#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Computer
{
    string name;
    int r,s,d;
    int mark;
    Computer(string name, int r, int s, int d)
    {
        this->name = name;
        this->r = r;
        this->s = s;
        this->d = d;
        mark = 2*r + 3*s + d;
    }
};
bool compare(Computer a, Computer b)
{
    if(a.mark < b.mark)
        return false;
    else if(a.mark > b.mark)
        return true;
    else if(a.mark == b.mark)
    {
        return a.name.compare(b.name);
    }
}
int main()
{
    int n;
    cin >> n;
    if(n==0)
        return 0;
    vector<Computer> comp;
    string name;
    int r,d,s;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> r;
        cin >> d;
        cin >> s;
        comp.emplace_back(Computer{name,r,d,s});
    }
    if(n == 1)
    {
        cout << name;
        return 0;
    }
    sort(comp.begin(),comp.end(),compare);
    cout << comp[0].name << endl;
    cout << comp[1].name << endl;
    return 0;
}
