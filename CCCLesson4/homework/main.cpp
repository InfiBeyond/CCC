#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// slide 9 count step
/*int countStep(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else if (n == 2)
        return 2;
    else if (n < 0)
        return 0;
    else
        return countStep(n - 3) + countStep(n - 2) + countStep(n - 1);
}*/
//2016 s2
/*int findMin(vector<int>s1,vector<int>s2,int N)
{

    if(N==-1)
    {
        return 0;
    }
    return max(s1[N],s2[N])+findMin(s1,s2,N);
}
int findMax(vector<int>s1,vector<int>s2,int N,int i = 0)
{
    if(N==-1)
    {
        return 0;
    }
    return max(s1[N],s2[i])+findMax(s1,s2,N-1, i+1);
}*/
//main

    /*int q;
    cin >> q;
    int N;
    cin >> N;
    vector <int> s1;
    vector <int> s2;
    int temp;
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        s1.emplace_back(temp);
    }
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        s2.emplace_back(temp);
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int test = (q==1) ? findMin(s1,s2,N-1):findMax(s1,s2,N-1);
    cout << test;
    return 0;*/
    /*

struct Date
{
    int year,month,day;
};
struct Student
{
    string name;
    int studentNum, grade;
    Date bithday;
};
bool compare_birthdays(Date b1, Date b2)
{
    if(b1.year > b2.year)
        return false;
    else if(b1.year < b2.year)
        return true;
    if(b1.month < b2.month)
        return true;
    else if(b1.month > b2.month)
        return false;
    if(b1.day < b2.day)
        return true;
    return false;

}
vector<Date> sortStudents_birthday(vector<student> s)
{
    int n = s.size();
    int stop = 0;
    for(int i=0; i<n; i++)
    {
        stop = 0;
        check++;
        for(int j=0; j<n-i-1; j++)
        {
            check++;
            if(!compare_birthdays(s[j].birthday, s[j+1].birthday))
            {
                swap(s[j],s[j+1]);
                stop++;
            }
        }
        if(stop == 0)
          break;
    }
    return s;

}*/
struct Road
{
    int a,b;
};
int findMin(int N, int M, vector<int>pho, vector<Road> road)
{
    if(M == 0)
        return 0;
    for(auto i : road)
    {
        for(auto j : pho)
        {
            if(i.a==j|| i.b==j)
            {
                walk()
            }
        }
    }

}

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
