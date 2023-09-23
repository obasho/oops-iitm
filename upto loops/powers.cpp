#include <iostream>
using namespace std;
int main()
{
    int k=0;
    cout<<"enter number"<<endl;
    cin>>k;
    int m=k;
    for(int i=2;i<6;i++)
    {
        m*=k;
        cout<<k<<"  to the power of  "<<i<<"="<<m<<endl;
    }
}