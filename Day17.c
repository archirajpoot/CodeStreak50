// Find intersection of two sorted arrays
#include <stdio.h>
int main()
{
    int arr1[] = {2, 3, 4, 5, 6};
    int arr2[] = {5, 6, 7, 8, 9};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d  ", arr1[i]);
                break;
            }
            else if (arr2[j] > arr1[i])
            {
                // Since arrays are sorted, no need to check further
                break;
            }
        }
    }
}