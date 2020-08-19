#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
vector <vector <char>> initialize(int n)
{
    //part 1
    vector <vector<char>> board;
    for(int i = 0; i < n; i++)
    {
        board.emplace_back(vector<char>());
        for(int j = 0; j < n; j++)
        {
            board[i].emplace_back('b');
        }
    }
    //part 3
    bool wFirst = false;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
            wFirst = true;
        for(int j = 0; j < n; j++)
        {
            if((wFirst&&j%2==0) || (!wFirst&&j%2!=0))
            {
               board[i][j] = 'b';
            }
            else
            {
               board[i][j] = 'w';
            }
        }
        wFirst = false;
    }
    return board;
}

void print (vector<vector<char>> board)
{
    for(auto i : board)
    {
        for(auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/
int main()
{
    //homework
    //SLIDE 9 2D STRING VECTORS
    /*int num;
    cin >> num;
    vector <vector<char>> board;
    for(int i = 0; i < num; i++)
    {
        board.emplace_back(vector<char>());
        for(int j = 0; j < num; j++)
        {
            board[i].emplace_back('b');
            cout << board[i][j];
        }
        cout << endl;
    }*/
    //SLIDE 10 2D STRING VECTORS B&W
    /*int num;
    cin >> num;
    vector <vector<char>> board;
    bool wFirst = false;
    for(int i = 0; i < num; i++)
    {
        board.emplace_back(vector<char>());
        if(i%2==0)
            wFirst = true;
        for(int j = 0; j < num; j++)
        {
            if((wFirst&&j%2==0) || (!wFirst&&j%2!=0))
            {
               board[i].emplace_back('b');
               cout << board[i][j];
            }
            else
            {
                board[i].emplace_back('w');
                cout << board[i][j];
            }
        }
        cout << endl;
        wFirst = false;
    }*/
    //slide23 FUNCTION CHECKERBOARD
    /*
    int n;
    cin >> n;
    vector<vector<char>> board = initialize(n);
    print(board);*/

    //slide62 IMPROVED BUBBLE SORT
    vector<int> a = {9,1,2,3,4,5,6,7,8};
    int n = a.size();
    int stop = 0;
    for(int i=0; i<n; i++)
    {
        stop = 0;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                stop++;
            }
        }
        if(stop == 0)
          break;
    }
    for(auto i: a)
    {
        cout << i << " ";
    }

    //CLASS
    /*int k;
    cin >> k;
    vector <int> num;
    int boss;
    int ans = 0;
    for(int i = 0; i < k; i++)
    {
        cin >> boss;
        if(boss != 0)
        {
            num.emplace_back(boss);
            ans+=boss;
        }
        else
        {
            ans-=num.back();
            num.pop_back();
        }
    }
    cout << ans;
    */

    /*int num;
    cin >> num;
    vector <vector<char>> color;
    for(int i = 0; i < num; i++)
    {
        color.emplace_back(vector<char>());
        for(int j = 0; j < num; j++)
        {
            color[i].emplace_back('b');
        }
    }
     for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
           cout << color[i][j];
        }
        cout << endl;
    }
    */
   /* vector <double> num = {1.2,5,3.7,6.9,0.5,-3.2};
    sort(num.begin(), num.end());
    for(int i = 0; i < num.size(); i++)
    {
        cout <<num[i]<< " ";
    }
    */
    return 0;
}
