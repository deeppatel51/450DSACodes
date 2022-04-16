// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
       vector<int>v;
       int flag=0;
       sort(arr,arr+n);
       for(int i=0;i<n-1;i++)
       {
           int j=i+1;
           
           if(arr[i]==arr[j])
           {
                while(arr[i]==arr[j])
                 {
                      j++;
                 }
            v.push_back(arr[i]);
            flag=1;
           }
           
          
       
       i=j-1;
           
       }
       
       
       
       

if(flag==0)
{
   v.push_back(-1);
}

return v;
}
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
