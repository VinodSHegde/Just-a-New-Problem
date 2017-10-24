#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int n;
long long int solve(long long int arr[n],long long int a,long long int b,long long int k){
    for(long long int p=a;p<=b;p++){
        long long int x=p-1;
        arr[x]=arr[x]+k;
    }
    return 0;
}

int main() {
    long long int m;
    scanf("%lld %lld", &n, &m);
    long long int cmax[n];
    memset(cmax, 0, sizeof cmax);
    for(int a0 = 0; a0 < m; a0++){
        long long int a;
        long long int b;
        long long int k;
        scanf("%lld %lld %lld", &a, &b, &k);
        solve(cmax,a,b,k);
    }
    long long int new=0;
    for(long long int i=0;i<n;i++){
            if(cmax[i]>new){
                new=cmax[i];
            }
    }
    printf("%lld",new);
    return 0;
}

