#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Num
{
    int num;
    int frequency;
};
bool compare(Num a, Num b)
{
    if(a.frequency > b.frequency)
        return true;
    else if(a.frequency < b.frequency)
        return false;
    else
    {
        if(a.num > b.num)
            return true;
        else
            return false;
    }

}
int main()
{
    int n;
    cin >> n;
    int temp;
    vector<Num> frequency;
    int len = frequency.size();
    bool entered = false;
    for(int i = 0; i < n; i ++)
    {
        cin >> temp;
        len = frequency.size();
        for(int i = 0; i < len; i++)
        {
            if(temp == frequency[i].num)
            {
                frequency[i].frequency ++;
                entered = true;
            }
        }
        if(!entered)
        {
            frequency.emplace_back(Num{temp,1});
        }
        entered = false;
    }
    len = frequency.size();
    sort(frequency.begin(), frequency.end(), compare);
    if(len == 1)
    {
        cout << 0;
        return 0;
    }
    int maxFrecLen = 0;
    int frec = frequency[0].frequency;
    for(int i = 0; i < len; i++)
    {
        if(frec == frequency[i].frequency)
        {
            maxFrecLen ++;
        }
    }
    if(maxFrecLen == len)
    {
        cout << abs(frequency[len-1].num-frequency[0].num);
        return 0;
    }
    int frec2 = frequency[maxFrecLen].frequency;
    int maxFrecLen2 = maxFrecLen;
    for(int i = maxFrecLen; i < len; i ++)
    {
        if(frequency[i].frequency == frec2)
        {
            maxFrecLen2++;
        }
    }
    int mazx = 0;
    for(int i = 0; i < maxFrecLen; i++)
    {
        for(int j = maxFrecLen; j < maxFrecLen2; j++)
        {
            if(abs(frequency[j].num-frequency[i].num) > mazx)
            {
                mazx = abs(frequency[j].num-frequency[i].num);
            }
        }
    }
    cout << mazx;
    return 0;
}
