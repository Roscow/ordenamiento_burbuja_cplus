#include <iostream>

using namespace std;




int main()
{
    //crear un arreglo
    int arreglo[5];  // de 5 elementos

    arreglo[0]=11;      //inicia desde el 0
    arreglo[1]=5;
    arreglo[2]=6;
    arreglo[3]=9;
    arreglo[4]=8;

    //defino las variables
    int i;
    int j;
    int aux;

    //muestro el arreglo sin ordenar
    cout <<"arreglo desordenado"<<endl;

    for(i>0;i<=4; i++){
        cout <<arreglo[i]<<',';
    }
    cout <<endl;


    //ORDENAMIENTO BURBUJA
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(arreglo[i]>arreglo[j]){
                aux=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=aux;

            }
        }
    }

    //muestro el arreglo  ordenado
    cout <<"arreglo ordenado"<<endl;

    for(i=0;i<=4; i++){
        cout <<arreglo[i]<<',';
    }
    cout <<endl;



}
