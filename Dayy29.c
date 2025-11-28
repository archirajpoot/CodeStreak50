//31. Compress the string (like Leetcode 443)
#include<stdio.h>
#include<string.h>
int main(){
   char str[]="aabbbccccc";
//    int count1=0;
//    int count2=0;
//    int count3=0;
int freq[256];
for(int i=0;i<256;i++){
    freq[str[i]]++;
}
for(int i=0;i<256;i++){
    printf("%c%d",str[i],freq[str[i]]);
}
}
