#include <iostream>
using namespace std;
int main()
{
    int k=0;
    int f=1;
    cout<<"enter number"<<endl;
    cin>>k;
    for(int i=1;i<=k;i++)
        f*=i;
    cout<<k<<"factorial = "<<f;
}