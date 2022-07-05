#include<bits/stdc++.h>
using namespace std;

int  main()
{

   string s;
   cin>>s;
   int len=s.length();
   int flag=0;
   for(int i=0; i<len/2; i++){
    if(s[i]!=s[len-i-1])
        flag=1;
    break;
   }
   if(flag==1){
    cout<<"Not palindrome";
   }
   else{
    cout<<"Palindrome";
   }

}
