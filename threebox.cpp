#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+b+c<=d){
	        cout<<"1"<<endl;
	    }
	    else if((a+b+c>d&&a+b<=d)||(a+b+c>d&&c+b<=d)|| (a+b+c>d&&a+c<=d)){
	        cout<<"2"<<endl;
	    }else{
	        cout<<"3"<<endl;
	    }
	}
	return 0;
}

