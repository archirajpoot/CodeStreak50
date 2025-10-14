
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;

    int unionArr[20];
    int interArr[20];
    int i, j, k = 0, l = 0;

    // ---- Find Union ----
    for (i = 0; i < n1; i++) {
        unionArr[k++] = a[i];
    }

    for (i = 0; i < n2; i++) {
        int found = 0;
        for (j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = b[i];
        }
    }

    // ---- Find Intersection ----
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                interArr[l++] = a[i];
                break;
            }
        }
    }

    // ---- Print Union ----
    printf("Union: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    // ---- Print Intersection ----
    printf("\nIntersection: ");
    for (i = 0; i < l; i++) {
        printf("%d ", interArr[i]);
    }

    return 0;
}
