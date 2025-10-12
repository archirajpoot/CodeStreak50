//Find the 'Kth' max and min element of an array
#include<stdio.h>
void sorting(int arr[],int l){
  for(int i=0;i<l-1;i++){
    for(int j=i+1;j<l;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }
}
int main(){
 int arr[]={1,2,3,4,5,6,7,8,9};
 int l=sizeof(arr)/sizeof(arr[0]);
 int k,n;
 sorting(arr,l);
 printf("enter the kth value max want to find");
 scanf("%d",&k);
 printf("%d is the %d max \n",arr[l-k],k);
 printf("enter the kth value min want to find ");
 scanf("%d",&n);
 printf("%d is the %d min",arr[n-1],n);
 return 0;


}