#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int* solve(int grades_size, int* grades, int *result_size){
    int rs=*result_size;
    // Complete this function
    int n=grades_size;
    static int *result;
    result=(int *)malloc(n*sizeof(int));
    for(int num=0;num<grades_size;num++){
        int v=grades[num];
        if(v>=38){
            int check=v%5;
            if(check>2){
                int find = (v/5)+1;
                result[num]=5*find;
                rs++;
            }
            else{
                result[num]=v;
                rs++;
            }
        }
        else{
            result[num]=v;
            rs++;
        }
    }
    *result_size=rs;
    return(result);
}

int main() {
    int n;
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

