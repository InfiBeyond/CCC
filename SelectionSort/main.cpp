#include <iostream>
using namespace std;

template <typename T>
void  selectionSort(T arr[], int n)
{
    // min to max selection sort
    /*IDEA: find min in the array -> swap with the fisrt element
            starting from the second element, repeat step 1 until reaching the last element.*/
    int minNum;
    for(int i = 0; i < n-1 ; i ++)
    {
        minNum = i;
        for(int j = i+1; j < n; j ++)
        {
            if(arr[j] < arr[minNum])
            {
                minNum = j;
            }
        }
        swap(arr[i],arr[minNum]);
    }
}
int main()
{
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
      for(auto i: a)
    {
        cout << i << " ";
    }
    string c[4] = {"b","C","B","a"};
    selectionSort(c,4);
    for(auto i: c)
    {
        cout << i << " ";
    }
    return 0;
}
