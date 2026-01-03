//38. Search in a row-wise and column-wise sorted matrix
#include<stdio.h>
int main(){
    int m;//size of row
    int n;//size of coloumn
    int a[10][10];
    int target;
    int row=0;
    int coloumn=n-1;
    while(row<=m &&coloumn>=0){
        if(a[row][coloumn]==target) {printf("true");
         break;}
        else if(a[row][coloumn]<target) row++;
        else coloumn--;
    }
    printf("false");
}