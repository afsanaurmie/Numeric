#include<iostream>
using namespace std;
int main()
{
    int R,C,k,n,i;
    cin>>n;
    double A1[n],A2[n][n];
    for(R=0; R<n; R++)
    {
        cin>>A1[R];
    }
    for(R=0; R<n; R++)
    {
        cin>>A2[R][0];
    }
    for(C=1; C<n; C++)
    {
        for(R=n-1; R>=0; R--)
        {
            A2[R][C]=A2[R][C-1]-A2[R-1][C-1];
        }
    }

    cout<<"x        ";
    for(i=0; i<n; i++)
    {
        cout<<"y"<<i<<"        ";
    }
cout<<"\n\n";

    k=n;
    for(R=0; R<n; R++)
    {
        cout<<A1[R]<<"      ";

        for(C=0; C<=R; C++)
        {
            cout<<A2[R][C]<<"      ";
        }
        k--;
        cout<<"\n";
         }
   float h,p,x,y,q;
    h=A1[1]-A1[0];
    cout<<endl<<"h="<<h<<endl<<"x="<<1979;


    p=(x-A1[n-1]);
    cout<<endl<<"p="<<p;
    y=A2[n][0]+p*A2[n-1][1]+(p*(p+1)*A2[0][2])/2+p*(p+1)*(p+2)*A2[n-2][3]/6+(p*(p+1)*(p+2)*(p+3)*A2[n-3][4])/24;
    cout<<endl<<"y="<<y;


    return 0;
}








