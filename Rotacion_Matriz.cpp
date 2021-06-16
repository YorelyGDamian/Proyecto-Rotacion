//Multiplicacion  de dos matrices, debe coincidir i=fila; j=columna
//Importamos nuestra biblioteca

#include <stdio.h>

//Declaramos el metodo main
int main(){
	
//Declaramanos las variables que vamos a utilizar
int m,n,f,c,i,j,k,respuesta;

//Declaramos las variables donde se guardaran las coordenadas
float c1,c11,c2,c22,c3,c33,b1,b11,b2,b22,b3,b33;

//Declaramos nuestras matrices de tipo flotante
float A[100][100],B[100][100],C[100][100];

printf("\n-----------------Rotacion--------------------------\n");

printf("\n****************************************************\n");

printf("Ingresa 1 para CONTINUAR y 2 para SALIR :\n");
scanf("%d",&respuesta);
if(respuesta==1){
printf("\nINGRESE LA FILA Y COLUMNA DE LA MATRIZ MHR \n");
//La función scanf podemos introducir cualquier combinación de valores numéricos, caracteres sueltos y cadenas de caracteres a través del teclado.
//%d lo ocupamos para decir que se recibara un tipo de dato entero decimal con signo
scanf("%d",&m);

scanf("%d",&n);

printf("\n*****************************************************\n");

printf("\nINGRESE LA FILA Y COLUMNA DE LA MATRIZ de Coordenadas\n");

scanf("%d",&f);

scanf("%d",&c);

printf("\n");

if (n==f){
printf("\n-*****************************************************\n");

printf("INGRESE EL VALOR DE LA MATRIZ HMR\n\n");

//INGRESE LOS VALORES DE LA PRIMERA MATRIZ

for (i=1;i<=m;i++)

 for (j=1;j<=n;j++)

{ printf("A[%d,%d]= ",i,j);

   scanf ("%f",&A[i][j]);

}

printf("\n");

printf("\n---------------------------------------------------\n");

printf("\nINGRESE EL VALOR DE LA MATRIZ DE COORDENADAS\n\n");
//INGRESE LOS VALORES DE LA SEGUNDA MATRIZ
  for (i=1;i<=f;i++)

   for (j=1;j<=c;j++)

    { printf("B[%d,%d]= ",i,j);

      scanf ("%f",&B[i][j]);

    }

//MULTIPLICAMOS NUESTRAS MATRICES 

 for (i=1;i<=m;i++)

    {for (j=1;j<=c;j++){
	 C[i][j]=0;

         for (k=1;k<=n;k++)

          {
          	//REALIZAMOS LA MULTIPLICACION DE DE LA MATRIZ A Y B MEDINTE FILAS X COLUMNAS
		  	C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }

       }

    }

 printf("\n*****************************************\n");

 printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n");

//IMPRIME LA MATRIZ DEL RESULTADO

  for (i=1;i<=m;i++)

   for (j=1;j<=c;j++){ 
   	printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
    }
 //Mostramos las coordenadas de la figura  
 printf("\nEstas son las coordenadas de la figura Original:\n ");
  b1=B[1][1];
  b11=B[2][1];
  printf("Punto1\n");
  printf("%.2f,",b1);
  printf("%.2f",b11);
  printf("\n");
  b2=B[1][2];
  b22=B[2][2];
  printf("Punto2\n");
  printf("%.2f,",b2);
  printf("%.2f",b22);
  printf("\n");
  b3=B[1][3];
  b33=B[2][3];
  printf("Punto3\n");
  printf("%.2f,",b3);
  printf("%.2f",b33);
  //Mostramos las nuevas coordenadas a realizar la rotacion
  printf("\nEstas son las coordenadas despues de la rotacion:\n ");
  printf("\n");
  c1=C[1][1];
  c11=C[2][1];
  printf("Punto1\n");
  printf("%.2f,",c1);
  printf("%.2f",c11);
  printf("\n");
  c2=C[1][2];
  c22=C[2][2];
  printf("Punto2\n");
  printf("%.2f,",c2);
  printf("%.2f",c22);
  printf("\n");
  c3=C[1][3];
  c33=C[2][3];
  printf("Punto3\n");
  printf("%.2f,",c3);
  printf("%.2f",c33);
  
}else{
	
printf("\n****************************************\n");

printf("Estas matrices no se pueden multiplicar \n");

printf("debido a que el numero de columnas de la\n");

printf("matriz A es diferente al numero de filas\n");

printf("de la matriz B, !Vuelva a intentarlo!   \n");

}

}else{
	printf("Gracias:)Bonito Dia\n");
}

}
