//Search a 2D Matrix II
//Write an efficient algorithm that searches for a target value in an m x n integer matrix. The matrix has the following properties:

//1.Integers in each row are sorted in ascending from left to right.
//2.Integers in each column are sorted in ascending from top to bottom.


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int i=matrix.size();//no. of rows
        int j=matrix[0].size();//no. of col
        int row=0; int col=j-1;
        while((row>=0 && row<i)&& (col>=0 && col<j))
        {
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]<target)
                  row++;
            else
                col--;
        }
        return false;
    }
};


 
