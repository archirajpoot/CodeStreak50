 //Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)
 #include<stdio.h>
 void sort_012(int arr[],int n){
   int low=0,high=n-1,mid=0;
   while(mid<=high){
    if(arr[mid]==0) {
        int t=arr[mid];
        arr[mid]=arr[low];
        arr[low]=t;
        mid++;
        low++;

    }
    else if(arr[mid]==1) mid++;
    else{
         int t=arr[mid];
        arr[mid]=arr[high];
        arr[high]=t;
        high--;
    }
   }
 }
 void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
 }
 int main()
 {
  int arr[]={2,1,0,2,1,1,2,0,2,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort_012(arr,n);
  printarr(arr,n);
  return 0;
 }