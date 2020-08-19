#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> rice;
    int temp;
    for(int i = 0; i< num; i++)
    {
        cin >> temp;
        rice.emplace_back(temp);
    }
    int change = 0;
    int chain = 0;
    for(int i = 0; i > -1; i++)
    {
        for(int j = 0; j < num; j++)
        {
            for(int k = 1; k < num-j; k++)
            {
                if(rice[j] == rice [j+k])
                {
                    chain++;
                }
                else
                {
                    k = num-j;
                }
            }
            if(chain != 0)
            {
                for(int m = 1; m <= chain; m++)
                {
                    rice[j] = rice[j] + rice[j+1];
                    rice.erase(rice.begin()+j+1, rice.begin()+j+2);
                    change = 1;
                    if(m == chain)
                    {
                        num -= chain;
                        change = 1;
                        chain = 0;
                        j=-1;
                        continue;
                    }
                }
            }
            if(j < num-2)
            {
                if (rice[j] == rice[j+2])
                {
                    rice[j] = rice[j] + rice[j+1] + rice[j+2];
                    rice.erase(rice.begin()+j+1, rice.begin()+j+3);
                    change = 1;
                    j=-1;
                    num-=2;
                    continue;
                }
            }
        }
        if(change == 0)
            {break;}
        change = 0;
    }
    sort(rice.begin(),rice.end());
    cout << rice.back() << endl;
    return 0;
}
