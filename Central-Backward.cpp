#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,k,n,i;
    cin>>n;
    double arr1[n],arr2[n][n];
    double x,p,h,y,y0,y1,y2,y3;
    for(row=0; row<n; row++)
    {
        cin>>arr1[row];
    }

    for(row=0; row<n; row++)
    {
        cin>>arr2[row][0];
    }

    for(col=1; col<n; col++)
    {
        for(row=0; row<n-col; row++)
        {
            arr2[row][col]=arr2[row+1][col-1]-arr2[row][col-1];
        }
    }

    cin>>x;

    cout<<"x\t";
    for(i=0; i<n; i++)
    {
        cout<<"y"<<i<<"\t";
    }
    cout<<"\n--------------------------------------------------\n";
    k=n;
    for(row=0; row<n; row++)
    {
        cout<<arr1[row]<<"\t";

        for(col=0; col<k; col++)
        {
            cout<<arr2[row][col]<<"\t";
        }
        k--;
        cout<<"\n";
    }

    i=0;
    while(arr1[i]<x)
    {
        i++;
    }

    i--;

    h=arr1[1]-arr1[0];

    p=(x-arr1[i])/h;
    cout<<"P= "<<p<<" and ";

    row=i;
    y0=arr2[i][0];
    y1=arr2[i-1][1]*p;
    y2=(arr2[i][2]*p*(p-1))/2;
    y3=(arr2[i-1][3]*p*(p-1)*(p+1))/6;
    y=y0+y1+y2+y3;
    cout<<"y("<<x<<") = "<<y<<endl;

    return 0;
}
/*
4
25 30 35 40
0.2707 0.3027 0.3386 0.3794
32
*/


