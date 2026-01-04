//Find the 'Kth' max and min element of an array
#include<stdio.h>
void sorting(int arr[],int l){
  int check=1;
  for(int i=0;i< l-1 && check==1;i++){
    check=0;
    for(int j=0;j<l-i-1;j++){
        if(arr[j+1]>arr[j]){
            check=1;
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }
}
int main(){
 int arr[]={1,2,3,4,5,6,7,8,9};
 int l=sizeof(arr)/sizeof(arr[0]);
 int k,n;
 sorting(arr,l);
 printf("Enter the kth value max want to find:");
 scanf("%d",&k);
 printf("%d is the %d max \n",arr[l-k],k);
 printf("Enter the kth value min want to find: ");
 scanf("%d",&n);
 printf("%d is the: %d min",arr[n-1],n);
 return 0;


}