#include<bits/stdc++.h>
using namespace std;
int  main()
{

   int n, large;
   cin>>n;
   int a[n];
   large=a[0];
   for(int i=0; i<n;i++){
    cin>>a[i];
   }
   for(int i=0; i<n; i++){
    if(large<a[i])
        large = a[i];
   }

   int slarge = a[0];
   for(int i=0; i<n; i++){

    if(slarge<a[i]){
        if(a[i]!=large)
            slarge=a[i];

    }

   }

   cout<<"Second large Element= "<<slarge;


}
