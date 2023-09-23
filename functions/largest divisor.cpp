#include<iostream>
using namespace std;
int ld(int n)
{
    int i=n-1;
    for(;i>2;i--)
        if(n%i==0)
            break;
    if(i==2)
        return n;
    else
        return i;
}
int main()
    {
        int i=1;
        do
       { 
        int n=0;
        cin>>n;
        int f=ld(n);
        cout<<f<<endl;
        cin>>i;
        }
        while(i==0);
    }