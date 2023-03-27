#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int print=0;
	    for(int i=0;i<n;i++){
	       int z;
	       cin>>z;
	       print^=z;
	    }
	    	cout<<print<<" ";
	}
	
//2nd method	
	
// 		int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,ans=0;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    sort(arr,arr+n);
// 	    for(int i=0;i<n;i=i+2){
// 	        if(arr[i]!=arr[i+1]) {
// 	            cout<<arr[i]<<endl;
// 	            break;
// 	    }
// 	    }



	
	
	
	return 0;
}
