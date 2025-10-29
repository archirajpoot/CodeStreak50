// Missing number in array [1 to n]
#include<stdio.h>
int main(){
    int arr[]={2,3,4,7,8,0,9};
    int n;
    printf("enter the number to which find(1 to n)");
    scanf("%d",&n);
    // THROUGH HASHINGGGG!!!

    // int hash[100]={0};
    // for(int i=0;i<7;i++){
    //     hash[arr[i]]++;
    // }
    // for(int i=1;i<=n;i++){
    //     if(hash[i]!==0)
    //     printf("%d",i);
    // }
    
    // THROUGH LINEAR SEARCH!!!!

    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<7;j++){
            if(i==arr[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
        printf("%d",i);
        }
    }
  }


