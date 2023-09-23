#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int k=2;
    int f=0;
    while(i<101)
    {
        for(int j=2;j<k;j++)
        {
            if(k%j==0)
                {
                    f=1;
                    break;
                }
        }
        if(f==1)
        {
            f=0;
        }
        else
        {
            i++;
            cout<<i<<"."<<k<<endl;
        }
         k++; 

    }
}