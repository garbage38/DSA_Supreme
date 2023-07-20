#include <iostream>
#include <vector>
using namespace std;

void printSolution(vector<vector<char>> &board, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl
       << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
  // check current cell Queen position is possible

  // left row
  int i = row;
  int j = col;
  while (j >= 0)
  {
    if (board[i][j] == 'Q')
      return false;

    j--;
  }

  // Upper left corner
  i = row;
  j = col;
  while (i >= 0 && j >= 0)
  {
    if (board[i][j] == 'Q')
      return false;

    i--;
    j--;
  }
  // Lower left corner
  i = row;
  j = col;
  while (i < n && j >= 0)
  {
    if (board[i][j] == 'Q')
      return false;

    i++;
    j--;
  }

  return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{

  // base case
  if (col >= n)
  {
    printSolution(board, n);
    return;
  }

  // solve 1 case
  for (int row = 0; row < n; row++)
  {
    if (isSafe(row, col, board, n))
    {
      board[row][col] = 'Q';
      // baki recursion dekh lega
      solve(board, col + 1, n);
      // backtrack
      board[row][col] = '_';
    }
  }
}
int main()
{
  int n = 8;
  vector<vector<char>> board(n, vector<char>(n, '_'));
  int col = 0;
  solve(board, col, n);
  return 0;
}