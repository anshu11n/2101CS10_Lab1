#include<stdio.h>    
 void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
void main ()    
{   prinrf("BUBBLE SORT\n");

    int n;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter elements of array \n");
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    bubble(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
}    