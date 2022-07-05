 bool isPalindrome(int x) {
        if(x<0) return false;
       int rem;
       long long int sum=0;
       int temp=x;
        while(x>0){
          rem=x%10;
          sum=(sum*10)+rem;
          x=x/10;  
        }
        if(sum==temp){
            return true;
        }
        else{
            return false;
        }
        
