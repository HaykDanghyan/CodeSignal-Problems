int solution(vector<int> statues) 
{
    int n = 0;
    std::sort(statues.begin(),statues.end());
    for(int i = 0; i < statues.size() - 1; i++)
    {
         if(statues[i + 1] - statues[i] > 1)
        {
             n = n + statues[i + 1] - statues[i] - 1;
        }
    }
    return n;
}
