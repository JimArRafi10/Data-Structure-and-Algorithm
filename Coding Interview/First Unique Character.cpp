#include<bits/stdc++.h>
using namespace std;
int  main()
{

   string s;
   cin>>s;
   char ch;
   int arr[127]={};
   for(char c : s){
    arr[c]++;
   }
   for(int i=0;i<s.size(); i++){
    if(arr[s[i]]==1){
             ch=s[i];
        cout<<ch;
        break;

    }

   }

   //cout<<ch;


}
