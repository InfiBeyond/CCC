
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
/*
int n;
int countingSort[2001];
int lengths[2001];

void read_input()
{
	std::cin >> n;

	memset(countingSort, 0, sizeof(countingSort));

	for (int i = 0; i < n; i++)
	{
		int l;
		std::cin >> l;
		countingSort[l]++;
	}
}

int find_number_of_boards_at_height(int height)
{
	memcpy(lengths, countingSort, sizeof(lengths));

	int a = std::max(1, height - 2000);
	int b = height - a;

	int num_of_boards = 0;

	while (a <= (height / 2))
	{
		if (a == b)
		{
			int boards = lengths[a] / 2;
			lengths[a] -= boards * 2;

			num_of_boards += boards;
		}
		else
		{
			int boards = std::min(lengths[a], lengths[b]);
			lengths[a] -= boards;
			lengths[b] -= boards;

			num_of_boards += boards;
		}

		++a;
		--b;
	}

	return num_of_boards;
}

int main()
{
	read_input();

	int max_boards = 0;
	int heights_at_max_boards = 0;

	for (int i = 2; i <= 4000; i++)
	{
		int boards = find_number_of_boards_at_height(i);

		if (boards > max_boards)
		{
			max_boards = boards;
			heights_at_max_boards = 0;
		}
		if (boards == max_boards)
		{
			heights_at_max_boards++;
		}
	}

	std::cout << max_boards << " " << heights_at_max_boards;
	std::cin >> n;

    return 0;*/

int main ()
{
	int N;
	cin >> N;
	map < int, int > b;
	int temp;
	for(int i = 0; i < N; i++)
	{
		cin >> temp;
		b[temp] ++;
	}
	map<int,int> w;
	for(int i = 1; i <= 2000; i++)
	{
	 if(b[i] > 0)
	 {
	 	//add itself
		 w[i*2]+= b[i]/2;
		// combine with others
		 for(int j = i+1; j <= 2000; j++)
		 {
		 	w[i+j] += min(b[i],b[j]);
		 }
	 }
	}
	int max = 0;
	int maxNum = 0;
	for(auto i: w)
	{
		if(i.second > max)
		{max = i.second;
		 maxNum = 1;}
		else if(i.second == max)
		{maxNum++;}
	}
	cout << max << " " << maxNum;
	return 0;

}

