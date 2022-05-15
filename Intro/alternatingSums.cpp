vector<int> solution(vector<int> a) {
    std::vector<int> result;
    int team1 = 0,team2 = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(i % 2 == 0)
        {team2 += a[i];}
        else if(i % 2 == 1)
        {team1 += a[i];}
    }
    result.push_back(team2);
    result.push_back(team1);
    return result;
}
