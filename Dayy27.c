// Implement strstr() (substring search)
//substring inside string 
#include <stdio.h>

int main(){
     char str[100],substr[100];
     int j;
     int found=0;
     printf("enter the string: ");
     gets(str);
     printf("enter the sub string: ");
     gets(substr);
      //1.for ' '
    if(substr[0]=='\0'){
        printf("substring found at 0");
        return 0;
    }

for(int i=0;str[i]!='\0';i++){
    j=0;
    //for comparision of string with substring
    while(substr[j]!='\0'&&str[i+j]==substr[j]){
        j++;
    }
    // for printing of index number
    if(substr[j]=='\0'){
        printf("element find at the index : %d",i);
        found=1;
        break;
    }
    
}
if(!found){
    printf("element not found");
}
return 0;
}

