#include <iostream>
using namespace std;
void pallindrome(string &str)
{
    int n = str.length();
    bool flg = false;
    for (int i=0;i<n/2;i++)
    {
        if(str[i]==str[n-i-1])
            flg = true;
    }
    if(flg)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}
int main()
{
    string str = "madam";
    pallindrome(str);
    return 0;
}
