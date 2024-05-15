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
    int nchaves,apestrela,apnum, numap,chaap, numsapostados[10],estrelasapostados[2];
    numap = 5;
    chaap=2;

    do {
        cout << "Bem vindo ao Euromilhões! \nEscolha o tipo de aposta que deseja realizar: \n Aposta Simples (carregue S) \n Aposta Multipla (carregue M)";
        cin >> tipoaposta;
        cout << tipoaposta;
    } 
    while (tipoaposta != 'S' && tipoaposta != 's' && tipoaposta != 'M' && tipoaposta != 'm');

    if (tipoaposta=='S' || tipoaposta=='s')
       {
        cout << "Escolheu a Aposta Simples!\nQuantos boletins pertende apostar?";
        cin >> nchaves;
        do{
        
            cout << "Aposta Gerada Automaticamente (Carregue A) ou pelp Proprio (Carregue P)?";
            cin >> gerar;
        }
        while(gerar!='A' && gerar!='a' && gerar!='P' && gerar!='p');
        if (gerar=='A' || gerar=='a')
            {
                 cliente.apostaautomatica(nchaves);
            }
        else if (gerar=='P' || gerar=='p')
        {
            for (int i = 0; i < nchaves; i++)
            {
                cout << "Insira" << "numeros que deseja apostar: ";
                for (int j = 0; j < numap; j++)
                {
                    cout << "Numero " << j+1 << ": ";
                    cin >> numsapostados[j];
                } 
                cout << "Insira estrelas que deseja apostar:";
                for (int k = 0; k < chaap; k++)
                {
                    cout << "Estrela " << k+1 << ": ";
                    cin >> apestrela;
                    estrelasapostados[k]+=apestrela;
                }
                cout << "Chave: ";
                for (int a = 0; a < numap; a++)
                {
                    cout << numsapostados[a] << " ";
                }

                cout << "\nEstrelas: ";
                for (int b = 0; b < chaap; b++)
                {
                    cout << estrelasapostados[b] << " ";
                }
            }
                    
                    
        }
            
            
        }
    
}