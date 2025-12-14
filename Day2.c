#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("enter the number of element of array");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for(int i=0;i<n;i++){
      printf("arr[%d]:",i);
      scanf("%d",&arr[i]);
    }
    printf("Reverse of the array:\n");
    for(int i=0;i<n/2;i++){
       int temp=arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
      printf("arr[%d]:%d\n",i,arr[i]);
    }
    return 0;
}