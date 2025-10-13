#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        if (arr[low] < 0 && arr[high] < 0) {
            low++;
        }
        else if (arr[low] > 0 && arr[high] < 0) {
            // swap arr[low] and arr[high]
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
        else if (arr[low] > 0 && arr[high] > 0) {
            high--;
        }
        else { // arr[low] < 0 && arr[high] > 0
            low++;
            high--;
        }
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, n);

    printf("Array after rearranging negatives and positives:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
