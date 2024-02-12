#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    
    int i=strlen(word1);
    int k=strlen(word2);
    char *ptr=malloc(i+k);
    int m=0;
    int n=0;
    int j=0;

    while(1) {
            if(m<i){
                    ptr[j]=*(word1+m);
                    m++;
                    j++;
            }
            if(n<k){
                    ptr[j]=*(word2+n);
                    n++;
                    j++;
            }
            if(j==i+k){
                    break;
            }
    }

    return ptr;
}

int main(){
        char *word1="abcde";
        char *word2="xyz";
        char *ptr=mergeAlternately(word1,word2);
        printf("%s",ptr);
        return 0;
}
