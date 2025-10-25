// Cyclically rotate an array by one
 #include<stdio.h>
 int main(){
   int a[]={1,2,3,4,5};
   int n=sizeof(a)/sizeof(a[0]);
//    int temp=a[n-1];
//    for(int i=n-1;i>0;i--){
//     a[i]=a[i-1];
//    }
//    a[0]=temp;
//    for(int i=0;i<n;i++){
//     printf("%d ",a[i]);
//    }
    int PE=a[0];
    int temp=a[n-1];
    for(int i=1;i<n;i++){
        int CE=a[i];
        a[i]=PE;
        PE=CE;
    }
    a[0]=temp;
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }

 }