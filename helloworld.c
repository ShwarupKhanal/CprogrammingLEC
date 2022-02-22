#include<stdio.h>
int main(){
    char fname[20],Iname[20];
    
    printf("Enter your first name : ");
    scanf("%s",fname);

    printf("Enter your last name : ");
    scanf("%s",Iname);

    printf("Your full name is %s %s",fname,Iname);
    return 0;

}