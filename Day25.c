// //27 Longest common prefix
// #include<stdio.h>
// int main(){
//     char s[]="archi";
//     char p[]="archive";
//     char j[]="archery";
//     int i=0;
//     while(s[i]&&p[i]&&j[i]){

//         if(s[i]==p[i]&&p[i]==j[i]){
//             printf("%c",s[i]);
//         }
//         else{
//               break;
//         }
//           i++;
//     }
// return 0;
// }
//For N number of string
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[n][100];

    printf("Enter %d strings:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }

    int i = 0;

    printf("Longest Common Prefix: ");

    while (1) {
        char current = strs[0][i];
 
        if (current == '\0')   // if first string ends
            break;

        int all_match = 1;

        for (int j = 1; j < n; j++) {
            if (strs[j][i] != current) {  
                all_match = 0;  
                break;  
            }
        }

        if (all_match)
            printf("%c", current);
        else
            break;

        i++;
    }

    return 0;
}

