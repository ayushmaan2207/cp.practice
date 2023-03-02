#include<stdio.h>
int main(){
    int index=1;
    while(index<=5){
        printf("%d\n",index);
        index++; // index+=1
    }
    int n=8;
    do{                     //perform task then checks condition
        printf("\n%d",n);
        n++;
    }while(n<=5);
}