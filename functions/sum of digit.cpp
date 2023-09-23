#include<iostream>
using namespace std;
int sod(int i)
{
    int j=i/10;
    int l=i%10;
    if(l!=0)
    {
        int k=l+sod(j);
        cout<<k<<"/t"<<j<<endl;
        return k;
    }
    else
        return 0;
}
int main()
{
    int r=0;
    cin>>r;
    int h=sod(r);
    cout<<h;
}