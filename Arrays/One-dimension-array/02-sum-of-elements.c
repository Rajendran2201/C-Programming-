// WAP to print the sum of an array elements  let the array elemenets count is 10
#include<stdio.h>
int main(){
    int a[10];
    int sum=0;
    //getting the elements from the user 
    for(int i=0;i<10;i++){
    printf("Enter the value of a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    
    // find the seum of the elements of an array 
    for(int i=0;i<10;i++){
         sum+=a[i];
    }
    
    printf("The sum of the array elements is %d",sum);
   
    
    
}