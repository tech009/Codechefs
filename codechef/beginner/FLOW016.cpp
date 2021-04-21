#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long int ld;

ld gcd(ld a, ld b){
    
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ld a,b;
	    cin>>a>>b;
	    
	    ld g = gcd(a,b);
	    ld lcm = (a*b)/g;
	    cout<<g<<" "<<lcm<<endl;
	}
	return 0;
}
