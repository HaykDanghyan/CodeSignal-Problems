int solution(int deposit, int rate, int threshold)
{
    int year_count = 0;
    int result = deposit;
    while(!(deposit >= threshold))
    {
        deposit = deposit * rate / 100;
        result += deposit;
        deposit = result;
        year_count++;
    }
    return year_count;
}