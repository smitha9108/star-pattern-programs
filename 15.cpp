#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l=1;
    for(i=1;i<=9;i++)
    {
        k=1;
        for(j=1;j<=5;j++)
        {
            if(j>=6-l)
            {
                cout<<" "<<k<<" ";
                    k++;
            }

            else
                    cout<<"   ";
        }
        cout<<endl;
        i<5?l++:l--;
    }
}
