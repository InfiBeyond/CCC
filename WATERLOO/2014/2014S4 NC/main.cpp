#include <iostream>

using namespace std;

bool isTint (int t1, int t2, int t)
{
    if((t1+t2)>=t)
    {
        return true;
    }
    return false;
}
int getArea (int area1[4], int area2[4])
{
    int area;
    int h;
    int w;
    if(area1[3]>=area2[3])
    {
        if(area1[1]<=area2[1])
        {
            w = area2[3]-area2[1];
        }
        else
        {
             w = area2[3]-area1[1];
        }
    }
    else
    {
       if(area2[1]<=area1[1])
        {
            w = area1[3]-area1[1];
        }
        else
        {
             w = area1[3]-area2[1];
        }
    }
        cout << w << endl;

    if(area1[4]>=area2[4])
    {
        if(area1[2]<=area2[2])
        {
            h = area2[4]-area2[2];
        }
        else
        {
             h = area2[4]-area1[2];
        }
    }
    else
    {
       if(area2[2]<=area1[2])
        {
            h = area1[4]-area1[2];
        }
        else
        {
             h = area1[4]-area2[2];
        }
    }
    cout << h << endl;
    return area = h*w;
}
int main()
{
    int N;
    cin >> N;
    int T;
    cin >> T;
    int glass [N][4];
    int tint[N];
    int area = 0;
    for(int i = 1; i <= N; i++)
    {
       cin >> glass[i][1] >> glass[i][2] >> glass[i][3] >> glass[i][4] >> tint[i];
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(j == i && tint[i] >= T)
            {
               area  = area + getArea(glass[i],glass[j]);
               j = N+1;
               cout << area << endl;
            }
            else if (j>i)
            {
                 if(isTint(tint[i],tint[j],T))
                {
                    area = area + getArea(glass[i],glass[j]);
                    cout << i << " " << j << " " << area << endl;
                }
            }

        }
    }


    cout << area << endl;
    return 0;
}
