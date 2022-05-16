int solution(int n, int m)
{
    int candy_count = m % n;
    return m - candy_count;
}
