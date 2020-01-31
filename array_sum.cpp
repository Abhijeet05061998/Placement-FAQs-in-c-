#include<iostream>
using namespace std;

void sum_of_array(int a[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
}
int main()
{
    int n,a[100],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum_of_array(a,n,0);
}
