#include<stdio.h>
int main(){
    char line[255];
    FILE * fpointer = fopen("employees.txt","r"); // r for readding

    fgets(line,255,fpointer); //first line
    printf("%s",line);
    fgets(line,255,fpointer); //second line
    printf("%s",line);

    fclose(fpointer);
}