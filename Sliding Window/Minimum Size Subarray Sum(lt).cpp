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

    int sum = 0;
        int ans = INT_MAX;
        int start = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            while(sum >= k) {
                ans = min(ans, i - start + 1);
                sum -= a[start++];
            }
        }
      cout<<ans;

}
