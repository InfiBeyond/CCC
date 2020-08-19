#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string stu="";
    string tea="";
    string temp;
    int ans = 0;
    for(int i = 0; i < 2*num ; i ++)
    {
        cin >> temp;
        if(i<num)
        {
            stu+=temp;
        }
        else
        {
            tea+=temp;
        }
    }
    for(int i = 0; i < num; i++)
    {
        if(stu.substr(i,1)!= tea.substr(i,1))
        {
            ans++;
        }
    }
    cout << num-ans << endl;
    return 0;
}
