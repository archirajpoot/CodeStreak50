//36. Transpose of a matrix
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
}