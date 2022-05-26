#include<bits/stdc++.h>
using namespace std;

int value(char roman)
{
    switch(roman)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int romanToint(string A)
{

    int i,n,ans=0,p=0;
    n=A.length()-1;
    for(int i=n;i>=0; i--){
        if(value(A[i])>=p)
            ans=ans+value(A[i]);
        else
            ans=ans-value(A[i]);


    p=value(A[i]);

    }

    return ans;

}


int main()
{

    string A;
    cin>>A;
    num=romanToint(A);
    cout<<num<<endl;

    return 0;

}

//This code is from codewhoop chanel
