 //13. Find all pairs with a given sum
 #include<stdio.h>
 int main(){
    int arr[]={2,4,6,3,8,9,1,4};
    int n;
    printf("enter the sum");
    scanf("%d",&n);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==n){
            printf("(%d,%d)",arr[i],arr[j]);
        }
    }
    }
    return 0;
 }