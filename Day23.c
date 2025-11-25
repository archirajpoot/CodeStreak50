 //Check if two strings are anagrams
 #include<stdio.h>
 #include<string.h>
 int main(){
    char k[]="archi";
    char a[]="archm";
    if(strlen(k)!=strlen(a)){
        printf("non anagram");
    }
    int freq1[256]={0};
    int freq2[256]={0};
    // for(int i=0;k[i]!='\0';i++){
    //     freq1[k[i]]++;
    //     freq2[a[i]]++;
    // }
    
    for (int i = 0; k[i] != '\0'; i++) {
        freq1[(unsigned char)k[i]]++;
        freq2[(unsigned char)a[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("non anagrams");
            return 0;
        }
    }

    printf("anagrams");
    return 0;

}