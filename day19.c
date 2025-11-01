//Reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char a[]="Archi";
    int n=strlen(a); 
    int i=0,j=n-1;
    // while(i<=j){
    //   char temp=a[i];
    //   a[i]=a[j];
    //   a[j]=temp;
    //   i++;
    //   j--;
    // }
    for(int i=0;i<=n/2;i++){
        int t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for(int k=0;k<n;k++){
        printf("%c",a[k]);
    }
}
