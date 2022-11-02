

//eDWIN MANUEL SANCHEZ ALVARENGA <00095022@uca.edu.sv>

#include <stdio.h>
int main (){
    //edwin sanchez
//Escriba un programa que almacene cuantas letras a tiene una palabra en la primera línea, cuantas letras e en la segunda, cuantas letras i en la tercera, y así sucesivamente para las demás vocales.
//crear variables y contadores
    FILE* vocales = fopen("vocales.txt","w");

    char string1[5];
    int contador=0;
    int contador2=0;
    int contador3=0;
    int contador4=0;
    int contador5=0;
//pido oracion y guardo el string
     printf("escriba una oracion\n");
  fgets(string1, sizeof(string1), stdin);
  //creo un for para hacer un buvle
  //ocupo un switch para pedir las variables 
  for(int i=0 ; i < 5; i++){
     switch(string1[i]){
     case 'a':
            contador++;
            break;
        case 'e':
         contador2++;
         break;
        case 'i':
         contador3++;
         break;
      case 'o':
        contador4++;
        break;
      case 'u':
      contador5++;
      break;
     }
     
     //imprimo resultados
}
    //uso fprintf para imprimirlo en un txt
   fprintf(vocales,"el total de las repetciones de la vocal a es %d\n",contador);
    fprintf(vocales,"el total de repeticiones de la vocal e es %d\n",contador2);
    fprintf(vocales,"el total de repeticiones de la vocal i es %d\n",contador3);
    fprintf(vocales,"el total de repeticiones de la vocal o es %d\n",contador4);
     fprintf(vocales,"el total de repeticiones de la vocal u es %d\n",contador5);
  


    return 0;
}
