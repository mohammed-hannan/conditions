#include <stdio.h>
int main (){
    float nombre;
    scanf("%f",&nombre);
    if(nombre>0){
    printf("le nombre est positive.\n");
    } else if (nombre<0){
    printf("le nombre est negative.\n");
    } else {
        printf("le nombre est nul.\n");
     }
     return 0;
}