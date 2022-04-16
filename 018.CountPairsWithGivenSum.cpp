// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
     int getPairsCount(int arr[], int n, int k) {
       // code here
       sort(arr,arr+n);
int flag=0;
int count=0;
int low=0;
int high=n-1;
int temp;

while(low<high)
{
   if(arr[low]+arr[high]==k)
   {    flag=1;
       count++;
       temp=high;
   
   while(low<high-1)
     {
       if(arr[low]+arr[high-1]==k)
       {
           count++;
       }
       high--;
     }
     high=temp;
     low++;
   }

   else if(arr[low]+arr[high]>k)
   {
       high--;
   }

   else
   low++;

}


if(flag==0)
{
 return {0};
}

else
{
   return count;
}

   }
    }
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
