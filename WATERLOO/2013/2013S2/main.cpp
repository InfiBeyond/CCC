#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int maxWeight;
    int cars;
    cin >> maxWeight;
    cin >> cars;
    vector<int> car;
    int temp;
    int temp2 = cars;
    for(int i = 0; i < cars; i++)
    {
        cin >> temp;
        if(temp > maxWeight)
        {
            temp2 = i;
        }
        car.emplace_back(temp);
    }
    cars = temp2;
    int num = 0;
    int sum = 0;
    bool out = false;
    for (int i = 0; i < 4; i++)
    {
        if(out)
        {
            cout << num;
            return 0;
        }
        if(i>cars)
        {
            cout << num;
            return 0;
        }
        sum += car[i];
        if(sum > maxWeight)
        {
            out = true;
        }
        else
        {
            ++num;
        }
    }

    int a = 0;
    for (int i = 4; i <= cars; i++)
    {
        sum -= car[a];
        sum += car[i];
        a++;
        if(sum > maxWeight)
        {
            cout << num;
            break;
        }
        num ++;
    }
    return 0;
}
