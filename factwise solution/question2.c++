// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
bool isSafe(int row, int col, vector<vector<char>> &board, char c)
{
    for (int i = 0; i < board[0].size(); i++)
    {
        if (board[row][i] == c)
        {
            return false;
        }
        if (board[i][col] == c)
        {
            return false;
        }
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
        {
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>> &board)
{
    int n = board[0].size();
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (board[row][col] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isSafe(row, col, board, c))
                    {
                        board[row][col] = char(c);
                        if (solve(board))
                        {
                            return true;
                        }
                        else
                        {
                            board[row][col] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // Write C++ code here
    std::cout << "Hello world!";
    board = [];
    solve(board) ;
    return 0;
}