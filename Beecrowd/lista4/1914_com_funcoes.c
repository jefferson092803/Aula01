#include <stdio.h>
#include <string.h>


char* ehPArouImpar(int valor){
   if (valor%2==0)
   {
     return "PAR";
   }else
   {
    return "IMPAR";
   }
   
   
}
int main(){
    int numEntrada;
    char nome1[101],nome2[101],escolha1[6],escolha2[6];
    int valor1,valor2;
    scanf("%d",&numEntrada);
    for (int i = 0; i < numEntrada; i++)
    {
       scanf("%s",nome1);
       scanf("%s",escolha1);
       scanf("%s",nome2);
       scanf("%s",escolha2);
       scanf("%d %d",&valor1,&valor2);
       int soma = valor1+valor2;
       if (strcmp(ehPArouImpar(soma),escolha1)==0)
       {
          printf("%s\n",nome1);
       }
       else{
        printf("%s\n",nome2);
       }
       
    }
    


    return 0;
}