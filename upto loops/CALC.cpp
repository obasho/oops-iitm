#include <iostream>
using namespace std;
int main()
{
    float a=0;
    float b=0;
    float res=0;
    int c=0;
    cout<<"enter option";
    cout<<"\n";
    cout<<"1 . add ";
    cout<<"\n";
    cout<<"2 . sub";
    cout<<"\n";
    cout<<"3 . mul";
    cout<<"\n";
    cout<<"4 . div";
    cout<<"\n";
    cin>>c;
    cout<<"enter a and b";
    cout<<"\n";
    cin>>a>>b;
    if(c==1)
        {
            res=a+b;
            cout<<res;
        }
    else if(c==2)
        {
            res=a+b;
            cout<<res;
        }
    else if(c==3)
        {
            res=a+b;
            cout<<res;
        }
    else if(c==4)
        {
            res=a+b;
            cout<<res;
        }
    else
        cout<<"invalid option";
    return 0;
}