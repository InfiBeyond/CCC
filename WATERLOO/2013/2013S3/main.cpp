#include <iostream>

using namespace std;
struct Team
{
    int name;
    int score;
    bool favourite;
};
int main()
{
    int fav;
    int numPlayed;
    cin >> fav >> numPlayed;
    vector<Team> team;
    for(int i = 1; i <= 4; i++)
    {
        if(i == fav)
        {
            team.emplace_back(Team{i,0,true});
        }
        else
        {
            team.emplace_back(Team{i,0,false});
        }
    }
    int team1,team2,s1,s2;
    for(int i = 0; i < numPlayed; i++)
    {
        cin >> team1;
        cin >> team2;
        cin >> s1;
        cin >> s2;
        if(s1==s2)
        {
            team[team1].score += 1;
            team[team2].score += 1;
        }
        else if(s1 > s2)
        {
            team[team1].score += 3;
        }
        else
        {
            team[team2].score += 3;
        }
    }

    return 0;
}
