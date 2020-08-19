#include <iostream>

using namespace std;

int main()
{
    int k;
    int m;
    cin >> k;
    int arr [k];
    for(int i = 0; i<k; i++)
    {
        arr[i] = i+1;

    }
    cin >> m;
    int elim;
    for(int i = 1; i<m+1; i++)
    {
        cin >> elim;
        int n = -1;
        for(int f = 1; f<=k ; f++)
        {
            if(arr[f-1]!=0)
            {
                n++;
            }
            if((n+1)%elim ==0)
            {
                arr[f-1]=0;
            }

        }
    }
 for(int j = 0; j < k; j++)
    {
        if(arr[j]!=0)
        {
            cout << arr[j]<< endl;
        }
    }

    return 0;
}
