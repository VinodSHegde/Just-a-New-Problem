#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int cmpfunc(const void *a,const void *b){
    return(*(int *)a-*(int *)b);
}
long int calmin(int *arr){
    long int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+(*(arr+i));
    }
    return sum;
}
long int calmax(int *arr){
    long int sum=0;
    for(int i=4;i>0;i--){
        sum=sum+(*(arr+i));
    }
    return sum;
}


int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    qsort(arr,5,sizeof(int),cmpfunc);
    printf("\n");
    long int x = calmax(arr);
    long int y = calmin(arr);
    printf("%ld %ld",y,x);
    return 0;
}

