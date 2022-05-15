bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    if(yourLeft == friendsLeft && yourRight == friendsRight)
    {return true;}
    else if(yourLeft == friendsRight && friendsLeft == yourRight)
    {return true;}
    return false;
}
