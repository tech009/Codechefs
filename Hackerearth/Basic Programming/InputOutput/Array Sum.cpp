#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int arr[100] = {0};
    int tmp = 0;
    int count = 0;
    int limit = 0;
    for(int i=0; i<n; i++){
        long int x;
        cin>>x;
        while(x>0){
            tmp = arr[count] + (x%10) + tmp;
            arr[count] = tmp%10;
            x /= 10;
            tmp /= 10;
            count++;
        }
        while(tmp>0){
            tmp = arr[count]+tmp;
            arr[count] = tmp%10;
            tmp /= 10;
            count++;
        }
        limit = count;
        count = 0;
    }
    for(int i=limit-1; i>=0; i--)
        cout<<arr[i];

    return 0;
}