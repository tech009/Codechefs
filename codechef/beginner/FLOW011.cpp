#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){

    int t;
    cin>>t;
    while(t--){

        double sal;
        cin>>sal;

        if(sal<1500.00){
            double hra = 0.10*sal;
            double da = 0.90*sal;
            double gs = sal+da+hra;
            printf("%.2f\n", gs);
        }
        else{
            double hra = 500.00;
            double da = 0.98*sal;
            double gs = sal+da+hra;
            printf("%.2f\n", gs);
        }
    }

    return 0;
}