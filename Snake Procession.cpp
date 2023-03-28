// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	queue<string>st;
// 	string result;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string str[n] = {};
	     
// 	    for(int i=0;i<n;i++){
// 	        cin>>str[i];
// 	        if(str[i]=="H" || str[i]=="T"){
// 	            st.push(str[i]);
	            
// 	        }
	        
// 	    }
	    
	  
	    
	    
// 	    while(!st.empty()){
// 	       result += st.front();
// 	       st.pop();
	       
// 	    }
// 	    //reverse(result.begin(),result.end());
// 	   bool ans;
// 	     for(int i=0;i<result.length();i=i++){
// 	        if(result[i]== 'H' && result[i+1]== 'T' ){
// 	           // cout<<"valid";
// 	           ans=true;
// 	        }else{
// 	           // cout<<"Invalid";
// 	           ans=false;
// 	        }
// 	    }
// 	     if(ans)
// 	       cout<<"Valid"<<endl;
// 	      else
// 	        cout<<"Invalid"<<endl;
	      
	  
	    
	    
	    
// 	   //cout<<result; 
	    
// 	}
	

	
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string sn;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='.')
	        {
	            sn+=s[i];
	        }
	    }
	    bool ans = true;
	    if(sn.length() %2!=0){
	      ans = false;
	    }
	     else{
	         for(int i=0; i<sn.length(); i++)
	         {
	            if(i%2==0)
	            {
	                if(sn[i]=='T')
	                  ans=false;
	            }
	            else
	            {
	                if(sn[i]=='H')
	                 ans=false;
	            }
	         }
	     }
	     if(ans)
	       cout<<"Valid"<<endl;
	      else
	        cout<<"Invalid"<<endl;
	      
	    
	}
	return 0;
}