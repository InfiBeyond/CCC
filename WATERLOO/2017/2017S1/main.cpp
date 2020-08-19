#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> swift;
    vector<int> sema;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        swift.emplace_back(temp);
    }
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        sema.emplace_back(temp);
    }
    int k = 0;
    int swiftsum = 0;
    int semasum = 0;
    for(int i = 0; i < n; i++)
    {
        swiftsum += swift[i];
        semasum += sema[i];
        if(swiftsum == semasum)
        {
            k = i+1;
        }
    }
    cout << k;
    return 0;
}
