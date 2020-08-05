#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

using namespace std;


 int main ()
 {
    int vetor [3];
    int matriz [3][2];
    int saida [2];

    for (int i=0; i<3; i++) // leitura vetor
        {
            cout << " Digite o valor (3) para o vetor: ";
            cin >> vetor [i];
        }

        // leitura da matriz

    for (int l=0 ; l<3 ; l++)
        {
            for (int c=0; c<2; c++)
            {
            cout << "Digite o valor [" << l <<"][" <<c<<"] :  " ;
            cin >> matriz [l][c];
            }

        }
        //  calcular o produto
        int aux = 0;
        for (int c=0; c<2; c++)
            {
                for (int l=0; l<3; l++)
                    {
                        aux = aux + vetor[l] * matriz [l] [c];
                    }
                    saida [c] = aux;
                    aux=0;
                    cout << saida [c] << "\t";
            }

 return 0;
}
