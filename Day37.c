//37.Rotate matrix by 90 degrees clockwise::First transpose then reverse the row if clockwise otherwise for anticlockwise reverse the coloumn
#include<stdio.h>
int main(){
    int m;//size of row
    int n;//size of coloumn
    int a[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             int temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;
        }
    }
    int low=0;int high=m-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[i][n - j - 1];
            a[i][n - j - 1] = temp;
        }
    }

}