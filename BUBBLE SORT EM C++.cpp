#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int numeros[10];
    const int TAM = 10;
  
    unsigned seed = time(0);
    srand(seed);
    for (int i=0; i<TAM; ++i)
        numeros[i] = rand()%100;
    
   
    int aux;
    for (int i=0; i<TAM; ++i){
        for (int j=i; j<TAM; ++j){
            if (numeros[i]>numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    for (int i=0; i<TAM; ++i)
        cout << numeros[i] << " ";
    return 0;
}
