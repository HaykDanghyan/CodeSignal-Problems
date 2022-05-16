int solution(int nCols, int nRows, int col, int row) 
{
    int result = 0;
    int currentCol = nCols - col + 1;
    int currentRow = nRows - row;
    result = currentCol * currentRow;
    return result;
}
