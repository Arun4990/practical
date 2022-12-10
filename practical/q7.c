#include<stdio.h>
int length(char* str){
    int cnt=0;
    for(int i=0; str[i]!='\0'; i++){
        cnt++;
    }
    return cnt;
}
void reverse(char *str){
    int s=0;
    int e=length(str)-1;
    while(s<e){
        char temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
}
int main(){
    char str[20];
    printf("Enter Your String \n");
    gets(str);
    printf("Length of String is :- ");
    printf("%d\n",length(str));

    reverse(str);
    printf("This is Reverse Of String :-\n");
    printf("%s",str);
}