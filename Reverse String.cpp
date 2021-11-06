//Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        int start=0,end=l-1;
        for(int i=0;i<l/2;i++)
        {
         swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};
