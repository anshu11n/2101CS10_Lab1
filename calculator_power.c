#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter two numbers say(n,m) to calculate n power m (n^m)\n");
    int n,m;
    scanf("%d %d",&n,&m);
    
    printf("%f",pow(n,m));
    return 0;
}