#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N;
    int M;
    cin >> N >> M;
    char factory[N][M];
    int rowRobo;
    int colRobo;
    vector<int> empt;
    int step = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> factory[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(factory[i][j] == 'S')
            {
                rowRobo = i;
                colRobo = j;
            }
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(factory[i][j] == '.')
            {

            }
        }
    }
    return 0;
}
