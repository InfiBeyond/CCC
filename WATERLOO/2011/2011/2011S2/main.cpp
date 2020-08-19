#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<char> stu;
    vector<char> ans;
    char temp;
    int mark = 0;
    for(int i = 0; i < num; i++)
    {
        cin >> temp;
        stu.emplace_back(temp);
    }
    for(int i = 0; i < num; i++)
    {
        cin >> temp;
        ans.emplace_back(temp);
    }
    for(int i = 0; i < num; i++)
    {
        if(stu[i] == ans[i])
        {
            mark ++;
        }
    }
    cout << mark;
    return 0;
}
