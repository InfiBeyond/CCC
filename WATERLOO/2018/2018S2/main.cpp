#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int fl[N][N];
    bool colMin = true;
    bool rowMin = true;
    int ans[N][N];
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> fl[i][j];
        }
    }
    for (int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(fl[i][j]>fl[i+1][j])
            {
                colMin = false;
            }
            if(fl[i][j]>fl[i][j+1])
            {
                rowMin = false;
            }
        }
    }
    int row = 0;
    int col = 0;
    if(colMin && rowMin)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                ans[i][j] = fl[i][j];
            }
        }
    }
    else if(colMin)
    {
        for(int i = N-1; i >= 0; i--)
        {
            for(int j = 0; j < N; j++)
            {
                ans [row][col] = fl[j][i];
                col++;
            }
            row++;
            col = 0;
        }
    }
    else if(rowMin)
    {
        for (int i = 0; i < N; i++)
        {
            for(int j = N-1; j >= 0; j--)
            {
                ans [row][col] = fl[j][i];
                col++;
            }
            row++;
            col = 0;
        }
    }
    else
    {
        for(int i = N-1; i >= 0; i--)
        {
            for(int j = N-1; j >= 0; j--)
            {
                ans[row][col] = fl[i][j];
                col++;
            }
            row++;
            col = 0;
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
