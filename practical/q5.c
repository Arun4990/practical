#include<stdio.h>
int main(){
    int array[10][10];
    printf("Enter Size Of matrix m*n\n");
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Enter The Array element\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("This is Matrix \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element You want to Search\n");
    int key;
    scanf("%d",&key);
    int ans=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(array[i][j]==key){
                // printf("This number is Available %d ",array[i][j]);
                ans=1;
            }
        }
        
    }
    if(ans==1){
        printf("This Number is Available  in Matrix %d",key);
    }
    else{
        printf("This number is not Available in Matrix ");
    }

}