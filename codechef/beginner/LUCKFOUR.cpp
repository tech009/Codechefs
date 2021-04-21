#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n;
	    cin >> n;
	    int count4 = 0;
	    while(n>0){
	        int rem = n%10;
	        if (rem==4)
	            count4++;
            n /= 10;
	    }
	    cout<<count4<<endl;
	}
	return 0;
}
