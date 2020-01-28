//keypad problem
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void printkeypad(int n,string output,string option[10])
{
    // base case
    if(n==0)
    {
        cout<<output<<endl;
    }
    int digit;
    digit=n%10;
    int i;
    for(i=0;i<option[digit].length();i++)
    {
        //recursion call
        printkeypad(n/10,option[digit][i]+output,option);
    }
    return;
}
void keypad(int n)
{
    string option[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    printkeypad(n,"",option);
}
int main()
{
    int n;
    cin>>n;
    keypad(n);
}
