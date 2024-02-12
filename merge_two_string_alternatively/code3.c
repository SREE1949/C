#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    char *ptr=malloc(strlen(word1)+strlen(word2));
    int i=0;
    int k=0;

    while(1) {
        if(*(word1+i) != '\0'){
            ptr[k]=*(word1+i);
            k++;
        }
        if(*(word2+i) != '\0'){
            ptr[k]=*(word2+i);
            k++;
        }
        if(*(word1+i) == '\0' && *(word2+i)=='\0'){
            break;
        }
        i++;
    }
    return ptr;
}

int main(){
        char *word1="abc";
        char *word2="xyz";
        char *ptr=mergeAlternately(word1,word2);
        printf("%s",ptr);
        return 0;
}
