// Check for palindrome
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madm";
    int n=strlen(name);
    // int i=0,j=n-1;
    int count=0;
    for(int i=0;i<=n/2;i++){
        if(name[i]!=name[n-i-1]){
            count=1;
        }
    }
   if(count==0){
    printf("palindrome");
   }
   else{
   printf("not palindrome");}
}