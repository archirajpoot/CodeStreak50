// Remove duplicates from a string
#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "shriraaam";
    int n=strlen(s);
    printf("Without duplicates: ");
    for (int i=0;i<n;i++) {
        int j;
        for (j=0;j<i;j++) {
            if (s[i]==s[j]) {
                break; 
            }
        }
        if (j==i) {
            printf("%c",s[i]);
        }
    }
    return 0;
}
