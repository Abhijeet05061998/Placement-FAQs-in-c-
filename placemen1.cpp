//print the vowel or constant char
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the test case:"<<endl;
     int t;
    cin>>t;
    while(t>0)
    {
    char c;
    cout<<"Enter the character"<<endl;
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {

        cout<<"VOWEL"<<endl;
    }
    else
    {
        cout<<"CONSUNANT"<<endl;
    }
    t--;
    }
    return 0;
}
