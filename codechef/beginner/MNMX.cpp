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

int main(void){

    int t;
    cin>>t;
    while(t--){

        int N;
        cin>>N;
        lld arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        quicksort(arr, 0, N-1);
        cout<<arr[0]*(N-1)<<endl;
    }
    return 0;
}