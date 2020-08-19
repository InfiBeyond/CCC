#include <iostream>
#include <vector>
using namespace std;

struct Num
{
    int intval;
    string strnum;
    int intcoun;
};

int main()
{
    vector <Num> ans;
    int val;
    string num;
    Num temp;
    int coun = 0;
    for(int i = 0; i > -1; i++)
    {
        if(cin>>val>>num)
        {

        if(num == "I")
        {
            val == val;
            coun = 1;
        }
        else if(num == "V")
        {
            val = 5*val;
            coun = 2;
        }
        else if(num == "X")
        {
            val = 10*val;
            coun = 3;
        }
        else if(num == "L")
        {
            val = 50*val;
            coun = 4;
        }
        else if(num == "C")
        {
            val = 100*val;
            coun = 5;
        }
        else if(num == "D")
        {
            val = 500*val;
            coun = 6;
        }
        else if(num == "M")
        {
            val = 1000*val;
            coun = 7;
        }
        temp = {val,num,coun};
            ans.emplace_back(temp);
        }
        else
        {i = -2;}
    }
    int output = 0;
    int lar = 0;
    int len = ans.size();
    for(int i = 0; i < len-1; i++)
    {
        lar = ans[i].intcoun;
        if(lar<ans[i+1].intval)
        {
            output-=ans[i].intval;
        }
        else
            output+=ans[i].intval;
        if(i = len-2)
        output+=ans[i].intval;
    }

    cout << output;
    return 0;
}
