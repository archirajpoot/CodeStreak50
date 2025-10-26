 // 9. Check if array is sorted and rotated
 #include<stdio.h>
int main(){
    int a[]={4,5,1,2,3};
    int count=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
      if(a[i]>a[(i+1)%n]){
         count++;
      }
    }
    if(count==1){
      printf("The array is sorted and rotated:)");
    }
    else
    printf("The array is not sorted and rotated:(");
//    
//     int b[n];
//      for(int i=0;i<n;i++){
//        b[i]=a[i];
//     }
//     for(int i=0;i<n-1;i++){
//        for(int j=1;j<n-1-i;j++){
//         if(a[j]>a[j+1]){
//             int temp=a[j];
//             a[j]=a[j+1];
//             a[j+1]=a[j];
//         }
//        }
//     }
//     //{4,5,1,2,3}
//     for(int i=0;i<n;i++){
//    if(a[i]<a[(i+1)%n])
//    {
//     printf("Sorted");
//    }
// }
}