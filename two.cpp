#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int p;
    cin>>p;
    while(p--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m;
        cin>>m;
        if(m>n)
        break;
        
        sort(arr,arr+n);
        
    int res=INT_MAX;
    for(int i=1;(i+m-1)<n;i++)
    res=min(res,(arr[i+m-1]-arr[i]));
    
    cout<<res<<endl;
    }
    
}
