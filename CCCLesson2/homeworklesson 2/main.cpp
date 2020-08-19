#include <iostream>
#include <vector>

using namespace std;
//slide 24 Count Digit
int main()
{
    //slide 24 Count Digit
    /*int num;
    cin >> num;
    int countNum = 0;
    for(int i = 0; i >= 0; i++)
    {
        if(num != 0)
        {
            countNum ++;
            num/=10;
        }
        else
        {
            break;
        }
    }
    cout << countNum;
    */

    //slide 25 checkerboard
    /*int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i%2==0 && j%2!=0)|| (i%2!=0 && j%2==0))
            {
                cout << "white";
            }
            else
            {
                cout << "black";
            }
            if(j!=n)
            {
               cout << "-";
            }
        }
        cout << endl;
    }
    */

    //slide 26 modified checkerboard
    /*
    int n;
    cin >> n;
    cin.ignore();
    string color;
    string test = "";
    int ans = 0;
    int start = 0;
    int k = 1;
    for(int i = 1; i <= n; i++)
    {
        getline(cin,color);
        for(int j = 0; j < color.length(); j++)
        {
            if(color.substr(j,1)==" ")
            {
                test = color.substr(start,j-start);
                start = j+1;
            }
            else if (j==color.length()-1)
            {
                test = color.substr(start,j+1-start);
                start = 0;
            }
            if(test != "")
            {

                if((i%2==0 && k%2!=0)|| (i%2!=0 && k%2==0))
                {
                    if (test != "white")
                    {
                        ans++;
                    }

                }
                else
                {
                    if (test != "black")
                    {
                       ans++;
                    }
                }
                k++;
                test = "";
            }
        }
        k = 1;
    }
    cout << ans;
    */

    //slide 40 print every other
    /*int arr[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if((i+1)%2==0)
        {
            cout << arr[i] << " ";
        }
    }
    */

    //slide 44 number pair sum
    /*int len;
    cout << "Enter length of array: "<< endl;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int n;
    cin >> n;
    int numSum;
    cin >> numSum;
    int countNum = 0;
    for(int i = 0; i < len-1; i++)
    {
        for(int j = 1; j < len; j++)
        {
            if(arr[i]+arr[j]==numSum)
            {
                countNum++;
            }
        }
    }
    cout << ((countNum>=n)? "true":"false" );
    */

    //slide 25 checkerboard (vector)
    int n;
    cin >> n;
    vector<string> str;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i%2==0 && j%2!=0)|| (i%2!=0 && j%2==0))
            {
                str.emplace_back("white");
            }
            else
            {
                str.emplace_back("black");
            }
            if(j!=n)
            {
                str.emplace_back("-");
            }
        }
        for(int j = 0; j < str.size(); j++)
        {
            cout << str.at(j);
        }
        str.clear();
        cout << endl;
    }


    return 0;
}
