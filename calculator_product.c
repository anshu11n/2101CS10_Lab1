#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements you want to product : ");
    scanf("%d",&n);

    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int product=1;
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    printf("The product is : %d",product);
    
    return 0;
}