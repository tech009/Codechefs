#include <bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int low, int high){
    int i = low, j = high;
    int tmp;
    int pivot=arr[(low+high)/2];

    while(i<=j){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<=j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if(low<j)
        quicksort(arr, low, j);
    if(i<high)
        quicksort(arr, i, high);
}

int main(void){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        quicksort(arr, 0, n-1);
        int lim = 0;
        for(int i=0; i<n; i++){
            lim = i;
            if(arr[i]>m)
                break;
        }
        lim++;
        bool flag = false;
        int count = 1<<lim;
        for(int i=1; i<count; i++){
            int sum = 0;
            for(int j=0; j<lim; j++){
                if(i&(1<<j))
                    sum += arr[j];
            }
            if(sum == m){
                flag = true;
                break;
            }

        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}