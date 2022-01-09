#include<bits/stdc++.h>
using namespace std;

int fib(int n){
  if(n==0 || n==1){
    return n;
  }

  return fib(n-1)+fib(n-2);

}

int factorial(int n){
  if(n==0){
    return 1;
  }

  int prevfact=factorial(n-1);
  return n*prevfact;
}

int sum(int n){
  if(n==0){
    return 0;
  }

  int prevsum=sum(n-1);
  return n+prevsum;

}

int main()
{
    int n;
    cin>>n;
    cout<<"sum of number's till n ->"<<sum(n)<<endl;
    cout<<"Factorial of n->"<<factorial(n)<<endl;
    cout<<"Fibonacci of n->"<<fib(n)<<endl;


}
