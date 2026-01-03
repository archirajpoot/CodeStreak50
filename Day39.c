//  Spiral traversal of a matrix
#include <stdio.h>

int main() {
    int m, n;
    int a[10][10];

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Spiral traversal
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while(top<=bottom &&left<=right){
      for(int i=left;i<right;i++){
        printf("%d",a[top][i]);
      }
      top++;
      for(int i=top;i<bottom;i++){
        printf("%d",a[i][right]);
      }
      right--;
      if(left<=right){
        for(int i=right;i>=left;i--){
          printf("%d",a[bottom][i]);
        }
        bottom--;
      }
      if(top<=bottom){
        for(int i=bottom;i>=top;i--){
            printf("%d",a[i][left])
        }
        left++;
      }
    }
    