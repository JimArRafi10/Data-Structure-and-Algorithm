int fib(int n) {

       if(n<=1)
           return n;
        int prev1=1, prev2=0,ans;
        for(int i=2;i<=n;i++){
            ans=prev1+prev2;
            prev2=prev1;
            prev1=ans;
        }
        
        return ans;
    }
