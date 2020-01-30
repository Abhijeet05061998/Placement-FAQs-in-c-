//seating arrangement
#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
     n=n+2*(6-(n-1)%12)-1;
    if(n%6<2)
    {
        cout<<n<<" "<<"WS"<<endl;
    }
    else if(n%6==2||n%6==5)
    {
        cout<<n<<" "<<"MS"<<endl;
    }
    else
    {
        cout<<n<<" "<<"AS"<<endl;
    }
    t--;
}
}
