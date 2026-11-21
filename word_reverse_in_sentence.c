#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    scanf("%[^\n]",&arr);
    int sz=strlen(arr),y=0;
    for(int i=0;i<=sz;i++){
        y+=1;
        if(arr[i]==' '||arr[i]=='\0'){
            for(int j=i-1;j>=i-y;j--){
                printf("%c",arr[j]);
            }printf(" ");
            y=0;
        }
    }
}