// Spiral Matrix II

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        int val=1;
        vector<vector<int>>mat(n, vector<int>(n,0));
        while(r1<=r2&&c1<=c2)
        {
            for(int c=c1;c<=c2;c++)
            {
                mat[r1][c]=val++;
            }
            for(int r=r1+1;r<=r2;r++){
                mat[r][c2]=val++;
            }
              for(int c=c2-1;c>=c1;c--)
            {
                mat[r2][c]=val++;
            }
            for(int r=r2-1;r>r1;r--){
               mat[r][c1]=val++;
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return mat;
    }
};
