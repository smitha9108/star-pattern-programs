#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-k&&j<=3+k)
                    cout<<" * ";

            else
                    cout<<"   ";
        }
        i<4?k++:k--;
        cout<<endl;
    }
}
