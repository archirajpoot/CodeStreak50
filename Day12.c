 //12. Count the number of occurrences of an element
 #include<stdio.h>
 int main(){
    int n;
    int k=0;
    int arr[7]={2,3,4,2,7,2,3};
    printf("enter the number which  occurenece want to find");
    scanf("%d",&n);
    for(int i=0;i<7;i++){
        if(arr[i]==n){
          k++;
        }
    }
    printf("%d",k);
 }