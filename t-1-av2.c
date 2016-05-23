#include<stdio.h>
#include<string.h>
struct student
{
char name [25];
int mark;
}std[10];

void main()
{
 char temp[25];
 int i,j,tm;

 for(i=0;i<30;i++)
 {
 printf("Entrar com nome\n");
 scanf("%s",std[i].name);
 printf("Entrar com av1\n");
 scanf("%d",&std[i].mark);
 }
 for(i=0;i<30;i++)
 {
 for(j=i+1;j<30;j++)
 {
 if(std[i].mark<std[j].mark)
 {
 tm=std[i].mark;
 std[i].mark=std[j].mark;
 std[j].mark=tm;
 strcpy(temp,std[i].name);
 strcpy(std[i].name,std[j].name);
 strcpy(std[j].name,temp);
 }
 }
 }
 printf("\nOs nomes e notas em ordem decrescente sao\n");
 for(i=0;i<30;i++)
 printf("\n%s\t%d",std[i].name,std[i].mark);
return 0;
 }
