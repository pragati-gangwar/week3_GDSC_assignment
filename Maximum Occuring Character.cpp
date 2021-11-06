//Maximum Occuring Character 
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {

int freq[26];
for(int i=0;i<26;i++)
{
    freq[i]=0;
}
for(int i=0;i<str.size();i++)
{
    freq[str[i]-'a']++;
}
char a='a';
int j=0;
int p;
for(int i=0;i<26;i++)
{
    if(freq[i]>j)
    {j=freq[i];
    p=i;
    }
}
a=p+'a';
return a;
    }

};
