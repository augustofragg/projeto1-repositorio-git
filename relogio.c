#include <stdio.h>
#include <windows.h>
int main() {
    int h,m,s;
    int a=1000;
    
    printf("Qual a hora: \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60) 
    {
        printf("Erro");
        exit(0);
    }
    while(1) 
    {
        s++;
        if(s>59)
        {

           m++;
           s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12) 
        {
            h=1;
        }
        printf("Horario \n");
        printf("\n %02d : %02d : %02d",h,m,s);
        Sleep(a);
        system("cls");
    }
    return(0);
}
