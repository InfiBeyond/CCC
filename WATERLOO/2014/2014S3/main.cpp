  #include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int noChange = T;
    int N;
    int num = 1;
    string ans[T];
    for(int i = 1; i <= noChange; i++)
    {
     cin >> N;
     int car[N];
     int maxLast=N;
     bool canCandy = true;
     for(int j = 1; j <= N ; j++)
     {
         cin >> car [j];
     }
     for(int j = 1; j <= N ; j++)
     {
         if(car[j]==num)
         {
             car[j] = 0;
             num ++;
             if(num == N +1)
             {
                 j = N+1;
             }
         }
     }
     for (int j = N; j >= 1; j--)
     {
         if(car[j]!= 0 && car[j]<=maxLast)
         {
            maxLast = car[j];
         }
         else if(car[j]!=0)
         {
             ans[i] = "N";
             j = 0;
             canCandy = false;
         }
     }
     if(canCandy)
     {
         ans[i] = "Y";
     }
    }
    for(int i = 1; i <= T; i++)
    {
        cout << ans[i]<< endl;
    }
    return 0;
}
