#include <iostream>
#include <cmath>
#include <random>
using namespace std;


class euromilhoes
{
private:
    /* data */
public:

    int apostaautomatica(int nchaves){

    }
    
}cliente;

int main(){
    char tipoaposta, gerar;
    int nchaves, nnumap, numsapostados[10];
    do{
        cout << "Bem vindo ao Euromilhões! \nEscolha o tipo de aposta que deseja realizar: \n Aposta Simples (carregue S) \n Aposta Multipla (carregue M)";
        cin >> tipoaposta;
    }
    while (tipoaposta!='S' || tipoaposta!='s' || tipoaposta!='M' || tipoaposta!='m');
    
    if (tipoaposta=='S' || tipoaposta=='s')
    {
        cout << "Escolheu a Aposta Simples!\nQuantos boletins pertende apostar?";
        cin >> nchaves;
        do{
        
            cout << "Aposta Gerada Automaticamente (Carregue A) ou pelp Proprio (Carregue P)?";
            cin >> gerar;
        }
        while(gerar!='A' || gerar!='a' || gerar!='P' || gerar!='p');
        if (gerar=='A' || gerar=='a')
            {
                cliente.apostaautomatica(nchaves);
            }
            else if (gerar=='P' || gerar=='p')
            {
                cout << "Insira" << "numeros que deseja apostar: ";
                cin >> nnumap;
                for (int i = 0; i < nnumap; i++)
                {
                    cout << "Numero " << i+1 << ": ";
                    cin >> numsapostados[i];
                } 
            }
        
        
    }
    
}