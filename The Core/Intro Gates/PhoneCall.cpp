int solution(int min1, int min2_10, int min11, int s) 
{
    int result = 0;
    if (s < min1) 
    {
        return 0;
    }
    result++;
    s -= min1;
  
    if (s < 9 * min2_10)
    {
        return result + s / min2_10;
    }
    result += 9;
    s -= min2_10 * 9;
    
    return result + s / min11;
}