#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

struct Tree
{
    bool hasBeen;
    double time;
};
bool compare(Tree t1, Tree t2)
{
    return t1.time < t2.time;
    if(t1.time == t2.time)
    {
        if(!t1.hasBeen)
            return true;
        return false;
    }

}
int main()
{
    int day;
	cin >> day;
	int base;
	cin >> base;
	int n;
	cin >> n;
	vector <Tree> tree;
	bool been;
	double time;
	while (n>0)
	{
		cin >> time;
        cin >> been;
        if(been==1)
        {
            time/=2.0;
        }
        tree.emplace_back(Tree{been,time});
        n--;
	}
	sort(tree.begin(),tree.end(),compare);
    cout << endl;
	double t = 0;
	for(int i = 1; i <= day; i++)
    {
        for(int j = 1; j <= ceil((base+i*25)/50.0); j++)
        {
            t += tree[j-1].time;
            if(!tree[j-1].hasBeen)
            {
                tree[j-1].time/=2.0;
                tree[j-1].hasBeen = 1;
            }
        }
        sort(tree.begin(),tree.end(),compare);
        cout << "day " << i << ": " << t << endl;
        t = 0;
    }

    return 0;
}
