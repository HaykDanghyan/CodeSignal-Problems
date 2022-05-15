vector<string> solution(vector<string> inputArray) {
    std::vector<std::string> tmp;
    int max_length = inputArray[0].length();
    for(int i = 0; i < inputArray.size(); i++)
    {
       if(max_length < inputArray[i].length())
       {max_length = inputArray[i].length();}
    }
    for(int i = 0; i < inputArray.size(); i++)
    {
        if(max_length == inputArray[i].length())
        {
            tmp.push_back(inputArray[i]);
        }
    }
    return tmp;
}
