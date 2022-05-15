int solution(int n) 
{
    int hour = n / 60;
    int minute = n % 60;
    int first = 0,  second = 0 , third = 0,  fourth = 0;
    first = hour / 10;
    second = hour % 10;
    third = minute / 10;
    fourth = minute % 10;
    int result = first + second + third + fourth;
    return result;
}