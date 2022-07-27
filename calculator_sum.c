#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements you want to sum up : ");
    scanf("%d",&n);

    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The sum is : %d",sum);
    
    return 0;
}