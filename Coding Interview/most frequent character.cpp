#include<bits/stdc++.h>
using namespace std;
int main()

{
   string s;
   cin>>s;
   int len=s.size();
   int cnt=0;
   char maxchar;
   int maxcount=0;

   for(int i=0; i<len; i++){
        cnt=0;
    for(int j=0; j<len; j++) {
        if(s[i]==s[j]){
            cnt++;
        }
        if(maxcount< cnt){
            maxcount= cnt;
            maxchar=s[i];
        }
    }
   }

   cout<<maxchar;

}

