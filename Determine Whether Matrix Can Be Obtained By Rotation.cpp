//Determine Whether Matrix Can Be Obtained By Rotation
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int val=1;
        while(val<=4)
        { if(mat==target)
                return true;
             int s=mat.size();
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<=i;j++)
            {
               swap(mat[i][j],mat[j][i]) ;
    
            }
        }
        for(int i=0;i<s;i++)
        {    
            reverse(mat[i].begin(),mat[i].end());
        }
            
         val++;
            
            
        }
        return false;
    }
};
