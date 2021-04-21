#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
typedef long long int lld;

lld partition(lld[], lld, lld);
void quicksort(lld[], lld, lld);

int main(void) {
	// your code goes here
	lld n;
	scanf("%lld",&n);
	
	lld* arr = (lld*)malloc(sizeof(lld)*n);
	for(lld i=0; i<n; i++)
	    scanf("%lld", &arr[i]);
	    
    quicksort(arr, 0, n-1);
    lld max = -1;
    
    for(lld i=0; i<n; i++){
        if(max<(arr[i]*(n-i)))
            max=arr[i]*(n-i);
            
    }
    printf("%lld\n",max);
	return 0;
}

void quicksort(lld arr[], lld low, lld high){
    
    if(low < high){
        
        lld pivot = partition(arr, low, high);
        
        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}

lld partition(lld arr[], lld low, lld high){
    
    lld pivot = arr[high];
    lld pos = low - 1;
    lld temp;
    
    for(lld i = low; i <= high-1; i++){
        if (arr[i] < pivot){
            pos++;
            SWAP(arr[pos], arr[i], temp);
        }
    }
    SWAP(arr[pos+1],arr[high],temp);
    return(pos+1);
}