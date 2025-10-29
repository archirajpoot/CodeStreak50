 //Find duplicate number in array
 #include<stdio.h>
 int main(){
    int arr[6]={2,4,2,5,6,6};
    for(int i=0;i<6;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
           if(count!=0){
          printf("%d ",arr[i]);}
    }
 
 }