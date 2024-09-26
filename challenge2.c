#include <stdio.h>
int main(){
    int voyelle ;
    printf("enter une lettre");
    scanf("%d",&voyelle);
    if(voyelle=='e' || voyelle=='a'  || voyelle=='i'  || voyelle=='o'  )
    {
        printf("%d est un voyelle",voyelle);
    }
    else {
    printf("%d est non voyelle",voyelle);
    }
    return 0;
}