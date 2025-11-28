 //32. Longest substring without repeating characters
 #include<stdio.h>
 int f(int n){
    if(n<=50)
    return f(f(n+20));
    return n-5;
 }
 int main(){ 
    int n=f(10);
    printf("%d",n);
 }
