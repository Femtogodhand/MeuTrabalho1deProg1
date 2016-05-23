#include<stdio.h>
int main ()
{
  int i,j,a;
  char nome[30];
  float av1[30];
  
  for(i=0;i<30;i++)
  {
    printf ("\nEntre com seu nome %d:",i+1);
    scanf ("%s", &nome[i]);
    
    printf ("\nEntre com a av1 %d:",i+1);
    scanf ("%f",&av1[i]);
  }
  
  for (i=0; i<nome; ++i)
  {
    for (j=i+1; j<nome; ++j)
      { if (av1[i] < av1[j])
  { a        = av1[i];
   av1[i] = av1[j];
   av1[j] = a;
  }
      }
  }
  printf ("Av1 em ordem decrescente\n");
  
  for (i=0; i<nome; ++i)
  {
  printf ("%10f\n",av1[i]);
  }
  
  return 0;
  }