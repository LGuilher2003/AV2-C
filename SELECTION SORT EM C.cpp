#include <stdio.h>
int main(){
    int n, v[10005], i, k, menor, j, t;
    printf("   Digite a quantidade de numeros --> ");
    scanf("%i", &n);
    printf("        Serao %d numeros\n\n",n);
    for(i=0; i<n; i++){
        printf("   Digite o %d numero --> ",i+1);
        scanf("%i", &v[i]);
    }
    for(i=0; i<n-1; i++){
        for(k=i; k<n; k++){
            if(v[k] < v[i]){
                t = v[i];
                v[i] = v[k];
                v[k] = t;
            }
        }
    }
    printf("\nAqui estão Os Numeros\n");
    for(k=0; k<n; k++){
        printf(" %d numero --> %i\n",k+1,v[k]);
    }
   
    return 0;
}
