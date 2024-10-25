/*Arenas Mimbrera Karen Mariel 
Practica 11. Ejercicio examen. INCOMPLETO*/

#include <stdio.h>
#define apar=10
#define comp=100

void ini_matrix (int arr[apar][comp])
{
  int i,j;
  for(i=0; i<apar; i++)
    {
      for(j=0; j<comp; j++)
        {
          arr[i][j]=0;
        }
    }
}

//void para almacenar datos y que no nos regrese nada
void llenar (arr[apar][comp])
{
int i, j, num, num2;

  for(i=0;i<apar;i++)
    {
      printf("Dame la cantidad de componentes del aparato %d: ",i);
      scanf("%d",&num);
      for(j=0;j<num; j++)
        {
          printf("Dame el numero del componente: (0-99)");
          scanf("%d", &num2);
          arr[i][num2]=1;
        }
    }
}

void apar_mensual (aparatosmensuales[apar])
{
  int i;
  for(i=0; i<apar; i++)
    {
      printf("Numero de aparatos mensuales %d producidos: ", i);
      scanf("%d",&aparatosmensuales[i]);
    }
}

void comp_mensual (int arr[apar][comp], int men[apar], int total[comp])
{
  int i, j
  for(i=0; i<apar, i++)
    {
      for(j=0;j<comp;j++)
        {
          total[j]=arr[i][j]*men[i];
        }

//YO LO HICE
int main()
{
  arr[apar][comp]
  ini_matrix (int arr[apar][comp])
  llenar (arr[apar][comp])
  mensual (aparatosmensuales[apar])
  
