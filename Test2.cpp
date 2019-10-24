#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a=0;
    int arr[10]={0};
    char *str;
    str=(char*)malloc(1000*sizeof(char));
    scanf("%s",str);
    for(int i = 0 ;i < strlen(str) ;i++){
            a=(int)str[i];
            if(a>= 48 && a<59){
                arr[a-48]=arr[a-48]+1;
            }
        }
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
