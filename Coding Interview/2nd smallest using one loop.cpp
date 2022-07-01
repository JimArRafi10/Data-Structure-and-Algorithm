#include<bits/stdc++.h>
using namespace std;
int  main()
{

   int n, large;
   cin>>n;
   int a[n];
   
   for(int i=0; i<n; i++){
    cin>>a[i];
   }
   sort(a,a+n);
   int ssmall=0;
   for(int i=0; i<=n; i++){
      if(a[i] != a[0]){
          cout<<a[i]<<endl;
          break;
        }
   }



}
