//Toggle String
/*You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is,
all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin,s);			
    int l=s.size();
	for(int i=0;i<l;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		s[i]=s[i]+32;
		else if(s[i]>=97&&s[i]<=122)
		s[i]=s[i]-32;
	}
	cout<<s;
	return 0;
}
