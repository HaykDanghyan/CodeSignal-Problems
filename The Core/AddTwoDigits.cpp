int solution(int n) 
{
    int sum = 0;
    int value = 0;
    while(n != 0)
    {
        value = n % 10;
        sum += value;
        n /= 10;
    }
    return sum;
}
