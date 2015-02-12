/* Search in a row wise and column wise sorted matrix
Given an n x n matrix, where every row and column is sorted in increasing order. 
Given a number x, how to decide whether this x is in the matrix. The designed algorithm should have linear time complexity.
*/
#include <iostream>
using namespace std;
int search(int mat[4][4], int n, int target)
{
	for(int i = 0, j = n-1; i <= n && j >= 0;)
	{
		if(mat[i][j] == target) return target;
		else if (mat[i][j] < target)
			i++;
		else if (mat[i][j] > target)
			j--;
	}
	return -1;
}

int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  cout<<search(mat, 4, 39)<<endl;  
  return 0;
}