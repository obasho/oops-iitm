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
    cout<<"1 . circle ";
    cout<<"\n";
    cout<<"2 . square";
    cout<<"\n";
    cout<<"3 . rectangle";
    cout<<"\n";
    cout<<"4 . triangle";
    cout<<"\n";
    cin>>c;
    switch(c)
    {
        case(1):
            cout<<"enter radius";
            cout<<"\n";
            cin>>a;
            cout<<"\n";
            res=3.14*2*a*a;
            cout<<res;
            break;
        case(2):
            cout<<"side length";
            cout<<"\n";
            cin>>a;
            cout<<"\n";
            res=a*a;
            cout<<res;
            break;
        case(3):
            cout<<"length and breadth";
            cout<<"\n";
            cin>>a>>b;
            cout<<"\n";
            res=b*a;
            cout<<res;
            break;
        case(4):
            cout<<"base and height";
            cout<<"\n";
            cin>>a;
            cout<<"\n";
            res=0.5*b*a;
            cout<<res;
            break;
        default:
            cout<<"invalid option";
            
    }
}