#include<iostream>
using namespace std;
int fac(int i)
    {
        if(i!=1)
        {
            int k=i*fac(i-1);
            return k;
        }
        else
        return 1;
    }
int main()
    {
        int i=1;
        do
       { 
        int n=0;
        cin>>n;
        int f=fac(n);
        cout<<f<<endl;
        cin>>i;
        }
        while(i==0);
    }
