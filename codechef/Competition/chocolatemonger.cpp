#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;


void quicksort(lld arr[], lld left, lld right) {
      lld i = left, j = right;
      lld tmp;
      lld pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quicksort(arr, left, j);
      if (i < right)
            quicksort(arr, i, right);
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    lld n,x,flav=1;
	    cin>>n>>x;
	    if(n==x){
	        cout<<0<<endl;
	        continue;
	    }
	    lld* arr;
	    arr = (lld*)malloc(sizeof(lld)*n);
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    
	    quicksort(arr, 0, n-1);
	    for(int i=1;i<n;i++)
	        if(arr[i-1]!=arr[i])
	            flav++;
	    
	    
	    lld dup = n - flav;
	    if(dup >= x)
	        cout<<flav<<endl;
        else{
            x -= dup;
            flav -= x;
            cout<<flav<<endl;
        }
        
        free(arr);
	    
	    /*if(flav==n)
	        cout<<(n-x)<<endl;
        else if(flav==1)
            cout<<flav<<endl;
        else{
            lld dup = n-flav;
            if(dup >= x)
                cout<<flav<<endl;
            else{
                x -= dup;
                cout<<(flav-x)<<endl;
            }
        }*/
	}
	return 0;
}
