#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define forn(i,n) for(int i=0;i<n;i++)

//42%24=18
//24%18=6(a=24,b=18)
//18%6=0(gcd=6(a),it stops when the remainder is 0)

int gcd(int a, int b){

  while(b!=0){
    int rem=a%b;
    a=b;
    b=rem;
  }

  return a;
}

int main(){

  int a,b;
  cin>>a>>b;

  cout<<gcd(a,b)<<endl;

  return 0;

}
