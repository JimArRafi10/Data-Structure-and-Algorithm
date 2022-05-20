#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0, ans=INT_MAX;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    cout<<"First sum till number of k: "<<sum<<endl;
    ans= min(ans,sum);

    //sliding window
    for(int i=1;i<n-k+1;i++){
        sum-=a[i-1];
        sum+=a[i+k-1];
        ans= min(ans,sum);
        cout<<sum<<" ";
    }


    cout<<endl;
    cout<<ans<<endl;

}
