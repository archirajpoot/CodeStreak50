#include<stdio.h>
int main(){
   int arr[]={1,33,22,65,70,56};
   int max=arr[0];
   int min=arr[0];
   for(int i=0;i<6;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
   printf("max:%d\n",max);
    for(int i=0;i<6;i++){
    if(min>arr[i]){
        min=arr[i];
    }
   }
   printf("min:%d",min);
}
