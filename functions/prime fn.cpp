#include<iostream>
using namespace std;
bool isprime(int n)
{
    int i=2;
    for(;i<n;i++)
        if(n%i==0)
            {
                break;
            }
    if(i==n)
        return true;
    else
        return false;
}
int main()
{
    int m=2;
    int c=0;
    do   
    {
        bool u=isprime(m);
        if(u==1)
        {
            cout<<c<<"'. '"<<m<<endl;
            c++;
        }
        m++;
    }while(c<101);
}