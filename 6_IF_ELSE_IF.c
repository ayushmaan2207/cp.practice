#include<stdio.h>
int max(int a,int b,int c){
    int result;
    if(a>b && a>c){ // && is AND operator
        result=a;   // || is OR operator
    }               // != is not equal to ,where ! is negation operator
    else if(c>b){
        if(c>a){
            result=c;
        }
    }
    else{
        result=b;
    }
}
int main(){
    printf("%d",max(4,10,15));
}