//For two words ara anagrams,
//1.same number of letters
//2.made up of same letters


#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string A, string B)
{
    int n1,n2,i;
    n1=A.length();
    n2=B.length();
    if(n1!=n2)
    {
        return false;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for(int i=0; i<n1; i++){
        if(A[i]!=B[i])
            return false;
    }

    return true;

}



int main()
{
    string A,B;
    cin>>A>>B;
    isAnagram(A,B);

    if(isAnagram(A,B)){
        cout<<"Anagram";
    }
    else{
        cout<<"Not anagram";
    }


}
