#include<stdio.h>
// concatenat function
void concatenat(char* str1,char* str2,char *str3){
    int i=0,j=0;
    while(str1[i]!= '\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    
    while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;
        j++;
    }
}
//  print function
void print(char* str){
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
// copy function
void copy(char* str,char* str2){
    int i=0;
    while(str[i]!='\0'){
        str2[i]=str[i];
        i++;
    }

}
int main(){
    printf("Enter str1 and str2 \n");
    char str1[20];
    gets(str1);
    char str2[20];
    gets(str2);
    char str3[100];
    printf("Output of concatenat \n");
    concatenat(str1,str2,str3);
    print(str3);
    printf("Enter the string you want to copy other \n");
    char str4[20];
    gets(str4);
    char str5[20];
    printf("Output of Copy \n");

    copy(str4,str5);
    print(str5);
}