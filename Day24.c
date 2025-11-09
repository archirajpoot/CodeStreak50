#include <stdio.h>
#include <string.h>

#define MAX 5000  // to handle large strings

void countAndSay(int n) {
    char curr[MAX] = "1";   // first term
    char next[MAX];
    
    for (int i = 1; i < n; i++) {
        int len = strlen(curr);
        int index = 0;
        
        for (int j = 0; j < len; ) {
            char ch = curr[j];
            int count = 0;
            
            // count consecutive same digits
            while (j < len && curr[j] == ch) {
                count++;
                j++;
            }
            
            // convert count and character to string
            index += sprintf(&next[index], "%d%c", count, ch);
        }
        
        next[index] = '\0';  // end of string
        strcpy(curr, next);  // prepare for next iteration
    }
    
    printf("%s\n", curr);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("The %dth term in Count and Say sequence is:\n", n);
    countAndSay(n);
    
    return 0;
}
