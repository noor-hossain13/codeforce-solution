#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;


    int min=0,max=0,x=0;
    int arr[t];
    for(int i = 0 ; i < t ; i++)
    {
        cin>>arr[i];
        if(i==0)
        {
            min=arr[i];
            max=arr[i];
        }
        if(min>arr[i] )
        {
            x++;
            min=arr[i];
        }
        if(max<arr[i] )
        {
            x++;
            max=arr[i];
        }

    }

    cout<<x<<endl;
    return 0;


}
