#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
	for(int j=0;j<t;j++)
	{
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    	    cin >> arr[i];
    	}
    	for(int k=n-1;k>=0;k--)
    	{
    	    cout << arr[k] << " ";
    	}
    	cout << endl;
	}
	return 0;
}
