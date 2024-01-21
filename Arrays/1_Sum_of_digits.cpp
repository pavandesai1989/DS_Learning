https://www.geeksforgeeks.org/problems/sum-of-digits1742/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N)
    {
        int sum=0;
        while(N>0)
        {
            int digit = N%10;
            sum += digit;
            N = N/10;
            
        }
        return sum;
    }
};
