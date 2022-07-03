#include<bits/stdc++.h>
using namespace std;
int  main()
{

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n; i++){
    cin>>a[i];
   }

   int total = (n+1)*(n+2)/2;
   for(int i=0;i<n;i++){
    total -=a[i];
   }
   cout<<total;


}
