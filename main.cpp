

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count=0;
	    int n=s.size();
	   
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            if(i<1){
	                count++;
	            }
	            if(i>0){
	                if(s[i-1]=='1'){
	                    continue;
	                }
	                else{
	                    count++;
	                }
	       }
	      }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

