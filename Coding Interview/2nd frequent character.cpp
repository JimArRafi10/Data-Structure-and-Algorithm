#include<bits/stdc++.h>
using namespace std;
int  main()
{

   string s, answer;
   int i, length;

   int mx=-1;

   int frequency[256] = {0};
   cout<<"Enter  a string: ";
   cin>>s;

   for(int i=0; i< s.length(); i++){
    (frequency[s[i]]++);
   }
   int mxfreq= frequency[0], secfreq= frequency[0];

   for(int i=0; i<256; i++){
    if(frequency[i]> frequency[mxfreq]){
        secfreq = mxfreq;
        mxfreq = i;
    }
    else if(frequency[i] > frequency[secfreq] &&
            frequency[i] != frequency[mxfreq]){
                secfreq= i;
            }

   }

   cout<<char(secfreq);


}
