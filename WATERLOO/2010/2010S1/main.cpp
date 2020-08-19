#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NUM = 31;

// Function to calculate the position
// of characters
vector<int> positions(string str, int n)
{
     vector<int> num;
    for (int i = 0; i < n; i++) {

        // Performing AND operation
        // with number 31
       num.emplace_back(str[i] & NUM);
    }
    return num;
}
struct Computer
{
    string name;
    int ram;
    int cpu;
    int disk;
    int score;
};
bool mySort(Computer a,Computer b)
{
    return a.score > b.score;
    string alpha = "";
    vector<int> anum = positions(a.name,a.name.length());
    vector<int> bnum = positions(b.name,b.name.length());
    int j = 0;
    for(auto i: anum)
    {
        if(i < bnum[j])
            return true;
        j++;
    }
    return false;
}
int main()
{
    string n;
    int r, c, d;
    int l;
    vector <Computer> comp;
    cin >> l;
    for(int i = 0; i < l; i++)
    {
        cin >> n;
        cin >> r;
        cin >> c;
        cin >> d;
        comp.emplace_back(Computer{n,r,c,d,(2*r+3*c+d)});
    }
    sort(comp.begin(),comp.end(),mySort);
    if(l>1)
    {
        cout << comp[0].name << endl;
        cout << comp[1].name << endl;
        return 0;
    }
    cout << comp[0].name << endl;
    return 0;
}
