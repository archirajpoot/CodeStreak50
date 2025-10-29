// 14. Subarray with given sum (Two pointer / Sliding window)
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int k;
    printf("enter the value of k");
    scanf("%d",&k);
    int maxsum=0;
    for(int i=0;i<k;i++){
        maxsum=maxsum+arr[i];
    }
    int currentsum=maxsum;
    for(int i=k;i<n;i++){
         currentsum=currentsum+arr[i]-arr[i-k];
        if(currentsum>maxsum)
        maxsum=currentsum;
    }
    printf("%d",maxsum);
}
