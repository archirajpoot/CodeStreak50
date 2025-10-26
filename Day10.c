 //Leaders in an array
 #include<stdio.h>
 int main(){
    int a[5]={12,13,5,7,6};
    printf("Leader from the Right:%d ,",a[5-1]);
    for(int i=5-2;i>=0;i--){
        if(a[i]>a[i-1]){
            printf("%d ,",a[i]);
        }
    }
 }