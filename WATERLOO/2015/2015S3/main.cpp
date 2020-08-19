#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//we nee to keep track of the original sequence even after we sorted it.
bool compare(vector<int> a, vector<int> b)
{
    int lena = a.size();
    int lenb = b.size();
    if(lena < lenb)
    {
        return true;
    }
    else if(lena == lenb)
    {
        if(a[lena-1]<b[lenb-1])
        {
            return true;
        }
    }
    return false;
}
int comparePlane(vector<int> *p, vector<int> *g,int plane = 0, int gate = 0)
{
    if(p->empty()||g->empty()||plane==p->size()||gate==g->size())
    {
        return 0;
    }
    if((*p)[plane] == (*g)[gate])
    {
        g->erase(g->begin(),g->begin()+1);
        return 1;
    }
    else if((*p)[plane] > (*g)[gate])
    {
        gate++;
    }
    else
    {
        plane++;
    }

    comparePlane(p,g,plane,gate);

}
int main()
{
    int g;
    int p;
    cin >> g >> p;
    int temp;
    vector<vector<int>> plane;
    for(int i = 0; i<p; i++)
    {
        cin >> temp;
        plane.emplace_back(vector<int>{});
        for(int j = 1; j <= temp; j++)
        {
            plane[i].emplace_back(j);
        }
    }
    sort(plane.begin(),plane.end(),compare);
    vector<int> gate;
    for(int i = 1; i<=g; i++)
    {
        gate.emplace_back(i);
    }
    int ans = 0;
    for(int i = 0; i < p; i++)
    {
        temp = comparePlane(&plane[i],&gate);
        if(temp == 0)
        {
            cout << ans;
            return 0;
        }
        ans += temp;
    }
    cout <<ans;
    return 0;
}
