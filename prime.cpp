#include<iostream>
using namespace std;
bool primenumber(int n)
{
    int i=2;
     if(n<=1)
     {
         return false;
     }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
    void prime(int n)
    {
        for(int i=2;i<=n;i++)
        {

           if(primenumber(i))
            {
             cout<<i<<",";
            }
        }
    }
int main()
{
    int n;
    cin>>n;
    prime(n);
}

