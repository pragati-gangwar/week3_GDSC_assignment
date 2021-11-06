//Search a 2D Matrix
//Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

//1.Integers in each row are sorted from left to right.
//2.The first integer of each row is greater than the last integer of the previous row.
 
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
            else if(matrix[row][col]>target)
                col--;
            else
                row++;
        }
        return false;
    }
};
