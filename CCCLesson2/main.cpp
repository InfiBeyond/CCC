#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> vec = {1,2,3,4};
    vector <int> myIntVect = {1,2,3};
    vector <vector<int>> my2dVect = {{1,2,3}};
    vec.emplace_back(0);


    return 0;
}
