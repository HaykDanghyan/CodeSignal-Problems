string solution(string inputString) 
{
    std::string result;
    for(int i = 0; i < inputString.length(); i++)
    {
        if(inputString[i] != 'z')
        {result += inputString[i] + 1;}
        if(inputString[i] == 'z')
        {
            result += inputString[i] - 25;
        }
    }
    return result;
}
