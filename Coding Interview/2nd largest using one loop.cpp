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
   
   for(int i=n-1; i>=0; i--){
      if(a[i] != a[n-1]){
          cout<<a[i]<<endl;
          break;
        }
   }


   //cout<<"2nd largest Element= "<<slarge;


}
