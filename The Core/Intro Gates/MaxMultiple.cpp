int solution(int divisor, int bound) 
{
    int result = 0;
    int tmp = 0;
    if(bound % 2 == 0)
    {result = bound;}
    tmp = bound % divisor;
    if(bound - tmp / divisor != 0)
    {result = bound - tmp;}
    return result;
}