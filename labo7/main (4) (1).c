#include <stdio.h>
int main (){
    //edwin sanchez
//Escriba un programa que en un archivo escriba los número positivos por el usuario y en otro los negativos.

//cree dos archivos

 FILE* archivo = fopen("numpositivos.txt", "w");
 FILE* archivo2 = fopen("numnegativo.txt","w");
    
    if (archivo == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    // hice que la computadora viera si existen los archivos y si no que me escriba un mensaje.
     if (archivo2 == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    int num;
    int neg;
 //creo b8ucles para escribir mas numeros.
  for(int i=0 ; i < 10; i++){
     printf("escriba un numero positivo\n");
    scanf("%d",&num);
    fprintf(archivo,"%d",num);
}
//creo bucles para escribir mas numeros
     for(int i=0 ; i < 10; i++){
    printf("escriba un numero negativo\n");
    scanf("%d",&neg);
     fprintf(archivo2,"%d",neg);
     }
    
//cierro los archivos
    fclose(archivo);
    fclose(archivo2);


    return 0;
}