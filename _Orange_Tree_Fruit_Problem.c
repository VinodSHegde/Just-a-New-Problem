#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int calculate(int s,int t,int array[],int x,int y);

int calculate(int s,int t,int array[],int x,int y){
    int check=0;
    for(int i=0;i<y;i++){
        int sum=0;
        sum=array[i]+x;
        if((sum>=s)&&(sum<=t)){
            check++;
        }
    }
    return(check);
}

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int check_apple=calculate(s,t,apple,a,m);
    int check_orange=calculate(s,t,orange,b,n);
    printf("%d\n",check_apple);
    printf("%d\n",check_orange);
    return 0;
}

