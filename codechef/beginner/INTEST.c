#include<stdio.h>
typedef long long int lld;

int main(){

    lld n,k;
    scanf("%lld %lld",&n, &k);

    lld count = 0;
    for(lld i=0; i<n; i++){
        lld tmp;
        scanf("%lld", &tmp);
        if((tmp%k)==0)
            count++;
    }
    printf("%lld\n",count);
    return 0;
}