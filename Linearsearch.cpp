#include<iostream>
using namespace std;
void Linearsearch(int a[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==val)
            cout<<i<<endl;
    }
}
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val;
    cin>>val;
    Linearsearch(a,n,val);
}
