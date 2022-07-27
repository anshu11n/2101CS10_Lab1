#include<stdio.h>

 int factorial(int i){
   
    if(i==1 || i==0){
        return 1;
    }
    else{
     
        return i*factorial(i-1);
    }
}

int main(){
    printf("Factorial Calculator\n");
    int n;
    printf("Enter Element to be Factorized\n");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,factorial(n));
    return 0;
}