#include <iostream>
using namespace std;
int main()
{
    int a=1;
    int i=0;
    do
    {
        a=2*a+1;
        cout<<"enter 1 to add again  "<<a<<endl;
        cin>>i;
    } while(i==1);
    
}