#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){

        double quan, price;
        cin>>quan>>price;

        double sum;
        if(quan<1000){
            sum = (lf)quan*(lf)price;
            printf("%.6lf\n", sum);
            continue;
        }

        sum = (lf)quan*(lf)price;
        sum -= ((0.10)*sum);
        printf("%.6lf\n", sum);

    }

    return 0;
}