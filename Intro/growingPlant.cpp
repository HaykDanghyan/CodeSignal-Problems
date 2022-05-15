int solution(int upSpeed, int downSpeed, int desiredHeight) 
{
    int height = 0;
    int days = 1;
    height += upSpeed;
    while(height < desiredHeight)
    {
        days += 1;
        height -= downSpeed;
        height += upSpeed;
    }
    return days;
}