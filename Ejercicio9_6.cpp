#include <iostream>
#include <stdlib.h>
using namespace std;

void PedirDatos();
void quickSort(float a[], int primero, int ultimo)
void intercambio(float &x, float &y)
void Imprimir(int *, int);
int n, *elemento;

int main()
{
  PedirDatos();
  quickSort(elemento,0,n-1);
  intercambio(primero,ultimo);
  Imprimir(elemento, n);
    
  return 0;
}

void Imprimir(int *elemento, int n){
    for(int i=0;i<n;i++){
        cout<<elemento[i]<<' ';
        }
    }
    
void PedirDatos(){
     cout<<"ingrese el numero de elementos a ordenar:";
    cin>>n;
    
    elemento = new int[n];
    for(int i=0; i<n; i++){
        
    cin>>*(elemento+i);
    }
}

void intercambio(float &x, float &y){
    float aux;
    
    aux = x;
    x = y;
    y = aux;    
}



void quickSort(float a[], int primero, int ultimo){
    int i,j,central;
    float pivote;
    
    central = (primero+ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    
    do{
        while(a[i]<pivote)i++;
        while(a[j]>pivote)j--;
        
        if(i<=j){
            intercambio(a[i],a[j]);
            i++;
            j--;
        }
        
    }while(i<=j);

    if(primero < j){
        quickSort(a,primero,j);
    }
    if(i<ultimo){
        quickSort(a,i,ultimo);
        }
}
