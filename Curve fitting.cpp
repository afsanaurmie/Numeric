#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double x[10],y[12],x2[10],xy[10];
    int i,j,m,f,n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter X & Y:"<<endl;
    for(i=0;i<n;i++)
    {

        cin>>x[i];
        cin>>y[i];
         x2[i]=x[i]*x[i];
         xy[i]=x[i]*y[i];

    }

    cout<<"\n\n"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<" "<<y[i]<<" "<<x2[i]<<" "<<xy[i];
        cout<<endl;
    }
    double sx=0,sy=0,sx2=0,sxy=0;
       for(i=0;i<n;i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sx2=sx2+x2[i];
        sxy=sxy+xy[i];
    }
    cout<<"sx: "<<sx<<endl;
    cout<<"sy: "<<sy<<endl;
    cout<<"sx2: "<<sx2<<endl;
    cout<<"sxy: "<<sxy<<endl;
    double a1,a0;

    a1=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    a0=(sy/n)-(a1*(sx/n));
    cout<<"a1: "<<a1<<endl;
    cout<<"a0: "<<a0<<endl;

}
