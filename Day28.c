// 30. Valid Palindrome after removing at most one character

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int left=0;
    int removed=0;
    int right=strlen(str)-1;
    while(left<right){
        if(str[left]==str[right]){
            left++;
            right--;
        }
        else{
            if(str[left+1]==str[right]){
                left++;
                removed=1;
            }
            else if(str[left]==str[right-1]){
                right--;
                removed=1;
            }
            else{
                printf("NOT A VALID PALINDROME ");
                return 0;
            }
        }
    }
    printf("VALID PALINDROME");
    return 0;
}

