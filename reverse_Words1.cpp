#include <iostream>

using namespace std;

int main()
{
        string s;
        int begin,end,i,j=0,len,temp,count=0;

        cout<<"ENTER STRING: ";
        getline(cin,s);

        //To find the length of string
        len=s.length();

        //To reverse whole string
        for(i=0;i<(len/2);i++)
        {
                temp=s[i];
                s[i]=s[len-1-i];
                s[len-1-i]=temp;
        }

        //To reverse each word seperately
        for(i=0;i<len;i++)
        {
                 if(s[i]==' ' || s[i]=='\0')
                {
                         for(begin=j,end=i-1 ; begin<(i+j)/2 ; begin++,end--)
                         {
                                   temp=s[begin];
                                   s[begin]=s[end];
                                   s[end]=temp;
                         }
                         j=i+1;
                }
         }

       cout<<s<<" ";

       return 0;
}
