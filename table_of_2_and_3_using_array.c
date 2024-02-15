#include<stdio.h>

void table(int arr[][10],int n, int m,int number);

int main(){
    int pr[2][10];
    
    table(pr,0,10,2);
    table(pr,1,10,3);
    
    for(int i=0;i<10;i++){
        printf("%d\t",pr[0][i]);
        
    }
    printf("\n");
    
    for(int i=0;i<10;i++){
        printf("%d\t",pr[1][i]);
    }
    printf("\n");
    
    
    return 0;
    
    
    
    
}

void table(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++){
        arr[n][i]=number*(i+1);
        
    }
}

