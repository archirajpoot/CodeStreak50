// Kadane's Algorithm - Maximum Subarray Sum
#include<stdio.h>
int main(){
    int arr[]={1,-2,7,-2,4,6,-1,9,-3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("Enter the value of Element of Subarray:");
    scanf("%d",&k);
    int ksum=0;
    for(int i=0;i<k;i++){
       ksum+=arr[i];
    }
    int maxsum=ksum;
    for(int i=k;i<n;i++){
        ksum=ksum+arr[i]-arr[i-k];
        if(ksum>maxsum){
            maxsum=ksum;
        }
    }
    printf("Maxsum:%d",maxsum);
}