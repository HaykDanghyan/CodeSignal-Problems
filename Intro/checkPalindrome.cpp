bool solution(string inputString)
{
     string tmp = inputString;
     reverse(tmp.begin(), tmp.end());
     if (inputString == tmp)
     {return true;}
     else {
     return false;
     }   
}    