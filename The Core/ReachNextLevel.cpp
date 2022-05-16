bool solution(int experience, int threshold, int reward) 
{
    if(reward + experience == threshold)
    {return true;}
    if(reward + experience >= threshold)
    {return true;}
    return false;
}
