#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=6-k||j>=4+k)
                cout<<" * ";
            else
                cout<<"   ";
        }
        i<5?k++:k--;
        cout<<endl;
    }
}
