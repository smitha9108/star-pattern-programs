#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=k)
                    cout<<" * ";

            else
                    cout<<"   ";
        }
        i<4?k++:k--;
        cout<<endl;
    }
}
