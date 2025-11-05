 //24. Print all permutations of a string
 #include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char str[], int start, int end) {
    if (start == end) {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(&str[start], &str[i]);   // swap letters
        permute(str, start + 1, end); // call function for next position
        swap(&str[start], &str[i]);   // swap back (to restore original string)
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("All permutations are:\n");
    permute(str, 0, n - 1);

    return 0;
}
