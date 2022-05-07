#include<iostream>
using namespace std;
 
void create_Zarr(string str, int Z[])
{
    int n = str.length();
    int left, right, k;
 
    // [left,right] make a window which matches with prefix of str
    left = right = 0;
    for (int i = 1; i < n; ++i)
    {
        // if i>right nothing matches so we will calculate.
        // Z[i] using naive way.
        if (i > right)
        {
            left = right = i;
 
            // right-left = 0 in starting, so it will start
            // checking from 0'th index. 
            while (right<n && str[right-left] == str[right])
                right++;
            Z[i] = right-left;
            right--;
        }
        else
        {
            // k = i-left so k corresponds to number which
            // matches in [left,right] interval.
            k = i-left;
 
            // if Z[k] is less than remaining interval
            // then Z[i] will be equal to Z[k].
            
            if (Z[k] < right-i+1)
                Z[i] = Z[k];
 
            
            else
            {
                // else start from right and check manually
                left = i;
                while (right<n && str[right-left] == str[right])
                    right++;
                Z[i] = right-left;
                right--;
            }
        }
    }
}

void find(string text, string pattern)
{
    // Create concatenated string "P$T with additional character"
    string concat = pattern + "$" + text;
    int l = concat.length();
 
    // Constructing Z array
    int Z[l];
    create_Zarr(concat, Z);
 
    // now looping through Z array for matching condition
    for (int i = 0; i < l; ++i)
    {
        // if Z[i] (matched region) is equal to pattern
        // length we got the pattern
        if (Z[i] == pattern.length())
            cout << "Pattern found at index "
                << i - pattern.length() -1 << endl;
    }
}

// Driver program
int main()
{
    string text = "faabbcdeffghiaaabbcdfgaabf";
    string pattern = "aabb";
    find(text, pattern);
    return 0;
}
