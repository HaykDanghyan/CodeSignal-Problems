int solution(int year)
{
    if(year <= 0)
    {return 0;}
    if(year % 100 == 0)
    {return year / 100;}
    else
    {return year / 100 + 1;}
}