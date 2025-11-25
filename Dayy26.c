//28. Convert string to integer (like atoi)
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
      char str[100];
      printf("enter the string");
      fgets(str, sizeof(str), stdin);
      int i=0,sign=1,result=0;
      //1.for " "
      while(str[i]==' '){
        i++;
      }
      //2.for -
      if(str[i]=='-'){
        sign=-1;
        i++;
      }
      else if(str[i]=='+'){
        i++;
      }
      //3.for aplabet
      if(!isdigit(str[i])){
       printf("convertes string =0");
        return 0;
      }
      //4.for number
     while(isdigit(str[i])) {
    result = result * 10 + (str[i] - '0');
    i++;
}
printf("int %d",result*sign);
      return 0;
}
