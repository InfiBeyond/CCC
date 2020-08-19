#include <iostream>
#include <vector>


using namespace std;
struct Restaurant
{
    int name;
    bool pho;
    vector<Restaurant*> path;

};
int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> pho;
    int temp;
    Road tem;
    vector<Road> road;
    for(int i = 0; i < M; i++)
    {
        cin >> temp;
        pho.emplace_back(temp);
    }
    for(int i = 0; i > -1; i++)
    {
        if(cin >> tem.a >> tem.b)
            road.emplace_back(tem);
        else
            break;
    }
   return 0;
}
