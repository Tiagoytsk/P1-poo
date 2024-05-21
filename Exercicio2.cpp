#include <iostream>
#include <cmath>
#include <random>
#include <cstdlib>//para gerador de numeros
#include <ctime>//
#include <cctype>
using namespace std;


class Cliente {
public:
    char tipoaposta, gerar,input[10];
    int nchaves,apestrela,apnum, numap,chaap, numsapostados[10],estrelasapostados[2];
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
    

    cliente.numap = 5;
    cliente.chaap=2;

    do {
        cout << "Bem vindo ao Euromilhões! \nEscolha o tipo de aposta que deseja realizar: \n Aposta Simples (carregue S) \n Aposta Multipla (carregue M)";
        cin >> cliente.tipoaposta;
        cout << cliente.tipoaposta;
    } 
    while (cliente.tipoaposta != 'S' && cliente.tipoaposta != 's' && cliente.tipoaposta != 'M' && cliente.tipoaposta != 'm');

    if (cliente.tipoaposta=='S' || cliente.tipoaposta=='s')
       {
        do {
            cout << "Escolheu a Aposta Simples!\nQuantos boletins pertende apostar (1-5)? ";
            cin >> cliente.input;
            if (std::isdigit(cliente.input[0]) && cliente.input[1] == '\0' && cliente.input[0] >= '1' && cliente.input[0] <= '5') {
                cliente.nchaves = cliente.input[0] - '0';
                break;
            } else {
                cout << "Erro!! Valor invalido insira um valor entre 1 - 5" << endl;
            }
    } while (true);
        do{
        
            cout << "Aposta Gerada Automaticamente (Carregue A) ou pelp Proprio (Carregue P)?";
            cin >> cliente.gerar;
        }
        while(cliente.gerar!='A' && cliente.gerar!='a' && cliente.gerar!='P' && cliente.gerar!='p');
        if (cliente.gerar=='A' || cliente.gerar=='a')
            {
            for (int t = 0; t < cliente.nchaves; t++)
            {
                cliente.apostaautomaticanum(cliente.tipoaposta);
                cliente.apostaautomaticastar(cliente.tipoaposta);
            }
            }
        else if (cliente.gerar=='P' || cliente.gerar=='p')
        {
            for (int i = 0; i < cliente.nchaves; i++)
            {
                 cout << "Insira" << "numeros que deseja apostar: ";
        cout << "Insira" << "numeros que deseja apostar: ";
        for (int j = 0; j < cliente.numap; j++)
        {
            do {
                cout << "Numero " << j+1 << ": ";
                cin >> cliente.numsapostados[j];

                if(cin.fail()) {
                    cin.clear(); 
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Input invalido. Porfavor insira outro numero!" << endl;
                } else if (cliente.numsapostados[j] < 1 || cliente.numsapostados[j] > 50) {
                    cout << "Input invalido. Porfavor insira outro numero entre 1 e 50 sem repetir!" << endl;
                } else {
                    bool alreadyUsed = false;
                    for (int i = 0; i < j; i++) {
                        if (cliente.numsapostados[i] == cliente.numsapostados[j]) {
                            alreadyUsed = true;
                            break;
                        }
                    }
                    if (alreadyUsed) {
                        cout << "Input invalido. Porfavor insira outro numero este ja se encontra na aposta!" << endl;
                    } else {
                        break;
                    }
                }
            } while (true);
        }
        cout << "Insira estrelas que deseja apostar:";
        for (int k = 0; k < cliente.chaap; k++)
        {
            do {
                cout << "Estrela " << k+1 << ": ";
                cin >> cliente.apestrela;

                if(cin.fail()) {
                    cin.clear(); 
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    cout << "Input invalido. Porfavor insira outro numero!" << endl;
                } else if (cliente.apestrela < 1 || cliente.apestrela > 12) {
                    cout << "Input invalido. Porfavor insira outro numero entre 1 e 12 sem repetir!" << endl;
                } else {
                    bool alreadyUsed = false;
                    for (int i = 0; i < k; i++) {
                        if (cliente.estrelasapostados[i] == cliente.apestrela) {
                            alreadyUsed = true;
                            break;
                        }
                    }
                    if (alreadyUsed) {
                        cout << "Input invalido. Porfavor insira outro numero este ja se encontra na aposta!" << endl;
                    } else {
                        cliente.estrelasapostados[k] = cliente.apestrela;
                        break;
                    }
                }
            } while (true);
        }
                cout << "Chave: ";
                for (int a = 0; a < cliente.numap; a++)
                {
                    cout << cliente.numsapostados[a] << " ";
                }

                cout << "\nEstrelas: ";
                for (int b = 0; b < cliente.chaap; b++)
                {
                    cout << cliente.estrelasapostados[b] << " ";
                }
            }
                    
                    
        }
            
            
        }
    if(cliente.tipoaposta=='M'||cliente.tipoaposta=='m')
    {
        cout<<"Escolheu Aposta Multipla"<< endl <<"quantas boletins pretende apostar?";
        cin >> cliente.nchaves;
        do{
        
            cout << "Aposta Gerada Automaticamente (Carregue A) ou pelp Proprio (Carregue P)?";
            cin >> cliente.gerar;
        }
        while(cliente.gerar!='A' && cliente.gerar!='a' && cliente.gerar!='P' && cliente.gerar!='p');
        if (cliente.gerar=='A' || cliente.gerar=='a')
        {
            for (int t = 0; t < cliente.nchaves; t++)
            {
                cliente.apostaautomaticanum(cliente.tipoaposta);
                cliente.apostaautomaticastar(cliente.tipoaposta);
            }
        }
        else if (cliente.gerar=='P' || cliente.gerar=='p')
        {
                     for (int i = 0; i < cliente.nchaves; i++)
            {
                 cout << "Insira" << "numeros que deseja apostar: ";
        cout << "Insira" << "numeros que deseja apostar: ";
        for (int j = 0; j < cliente.numap; j++)
        {
            do {
                cout << "Numero " << j+1 << ": ";
                cin >> cliente.numsapostados[j];

                if(cin.fail()) {
                    cin.clear(); 
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Input invalido. Porfavor insira outro numero!" << endl;
                } else if (cliente.numsapostados[j] < 1 || cliente.numsapostados[j] > 50) {
                    cout << "Input invalido. Porfavor insira outro numero entre 1 e 50 sem repetir!" << endl;
                } else {
                    bool alreadyUsed = false;
                    for (int i = 0; i < j; i++) {
                        if (cliente.numsapostados[i] == cliente.numsapostados[j]) {
                            alreadyUsed = true;
                            break;
                        }
                    }
                    if (alreadyUsed) {
                        cout << "Input invalido. Porfavor insira outro numero este ja se encontra na aposta!" << endl;
                    } else {
                        break;
                    }
                }
            } while (true);
        }
        cout << "Insira estrelas que deseja apostar:";
        for (int k = 0; k < cliente.chaap; k++)
        {
            do {
                cout << "Estrela " << k+1 << ": ";
                cin >> cliente.apestrela;

                if(cin.fail()) {
                    cin.clear(); 
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    cout << "Input invalido. Porfavor insira outro numero!" << endl;
                } else if (cliente.apestrela < 1 || cliente.apestrela > 12) {
                    cout << "Input invalido. Porfavor insira outro numero entre 1 e 12 sem repetir!" << endl;
                } else {
                    bool alreadyUsed = false;
                    for (int i = 0; i < k; i++) {
                        if (cliente.estrelasapostados[i] == cliente.apestrela) {
                            alreadyUsed = true;
                            break;
                        }
                    }
                    if (alreadyUsed) {
                        cout << "Input invalido. Porfavor insira outro numero este ja se encontra na aposta!" << endl;
                    } else {
                        cliente.estrelasapostados[k] = cliente.apestrela;
                        break;
                    }
                }
            } while (true);
        }   
                cout << "Chave: ";
                for (int a = 0; a < cliente.numap; a++)
                {
                    cout << cliente.numsapostados[a] << " ";
                }

                cout << "\nEstrelas: ";
                for (int b = 0; b < cliente.chaap; b++)
                {
                    cout << cliente.estrelasapostados[b] << " ";
                }
            }
                    
                    
        }
            
            
        }
}