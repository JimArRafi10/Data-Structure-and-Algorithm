

// Maximum Subarray Sum in an Array

// Example: a = [-2,1,-3,4,-1,2,1,-5,4] output: 6
// Explanation: [4,-1,2,1] has the largest sum =6
int maxSumSubarray(int a[]){
  int maxsum=0;
  int cursum=0;

  for(int i=0; i<a.length();i++){
    cursum=cursum+a[i];
    if(cursum > maxsum){
        maxsum= cursum;
    }
    if(cursum<0){
        cursum=0;
    }

  }

  return maxsum;


}
