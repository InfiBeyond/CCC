#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Point
{
    double time,pos;
    double speed;
    Point(double t,double p)
    {
        time = t;
        pos = p;
        speed = 0;
    }
};
bool compare(Point a, Point b)
{
    if(a.time > b.time)
        return false;
    else
        return true;
}
int main()
{
    int n;
    cin >> n;
    double time,pos;
    vector<Point> street;
    for(int i = 0; i < n; i++)
    {
        cin >> time;
        cin >> pos;
        street.emplace_back(Point{time,pos});
    }
    sort(street.begin(),street.end(),compare);
    double dis = 0;
    double maxSpeed = 0;
    for(int i = 0; i<n-1; i++)
    {
        dis = abs(street[i].pos-street[i+1].pos);
        if((dis/(street[i+1].time-street[i].time))>maxSpeed)
        {
            maxSpeed = (dis/(street[i+1].time-street[i].time));
        }
    }
    cout << maxSpeed << endl;
    return 0;
}
