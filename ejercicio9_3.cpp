#include <iostream>
#include <stdlib.h>
using namespace std;


void PedirDatos();
void Ordenar(int *,int);
void Imprimir(int *, int);
int n, *elemento;


int main()
{
  PedirDatos();
  Ordenar(elemento, n);
  Imprimir(elemento, n);
  
 
  delete[] elemento;
  
  return 0;
}

void PedirDatos(){
    cout<<"ingrese el numero de elementos a ordenar:";
    cin>>n;
    
    elemento = new int[n];
    for(int i=0; i<n; i++){
        
        cin>>*(elemento+i);
        }
    }
    
void Ordenar(int *elemento, int n){
    int aux;
    
    for(int i=0; i<n; i++){
      int min=i;
      for(int j=i+1;j<n;j++){
          if(elemento[j]<elemento[min]){
              min = j;
              }
          }
        aux = elemento[i];
        elemento[i] = elemento[min];
        elemento[min] = aux; 
        }
    }

void Imprimir(int *elemento, int n){
    for(int i=0;i<n;i++){
        cout<<elemento[i]<<' ';
        }
    }
