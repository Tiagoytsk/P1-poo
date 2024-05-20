#include <iostream>
#include <cmath>
#include <random>
#include <cstdlib>//para gerador de numeros
#include <ctime>//
using namespace std;


class Cliente {
public:
    void apostaautomaticanum(char tipoaposta){
        cout<< "Chave: ";
        int maxNums = (tipoaposta == 'S' || tipoaposta == 's') ? 5 : 11;
        for (int i = 0; i < maxNums; i++) {
            int num = rand() % 50 + 1; 
            cout << num << ", ";
        }
        cout << endl;
    }

    void apostaautomaticastar(char tipoaposta){
        cout<< "Estrelas: ";
        int maxStars = (tipoaposta == 'S' || tipoaposta == 's') ? 2 : 9;
        for (int i = 0; i < maxStars; i++) {
            int star = rand() % 9 + 1;
            cout << star << ", ";
        }
        cout<< endl;
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
            for (int t = 0; t < nchaves; t++)
            {
                cliente.apostaautomaticanum(tipoaposta);
                cliente.apostaautomaticastar(tipoaposta);
            }
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
    if(tipoaposta=='M'||tipoaposta=='m')
    {
        cout<<"Escolheu Aposta Multipla"<< endl <<"quantas boletins pretende apostar?";
        cin >> nchaves;
        do{
        
            cout << "Aposta Gerada Automaticamente (Carregue A) ou pelp Proprio (Carregue P)?";
            cin >> gerar;
        }
        while(gerar!='A' && gerar!='a' && gerar!='P' && gerar!='p');
        if (gerar=='A' || gerar=='a')
        {
            for (int t = 0; t < nchaves; t++)
            {
                cliente.apostaautomaticanum(tipoaposta);
                cliente.apostaautomaticastar(tipoaposta);
            }
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
                estrelasapostados[k] = apestrela; // use = instead of +=
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