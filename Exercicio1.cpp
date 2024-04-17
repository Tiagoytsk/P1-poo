#include <iostream>
#include <cmath>
using namespace std;

bool temdoisdecimais(float troco) {
    double aredondado = round(troco * 100) / 100;
    return abs(troco - aredondado) < 0.0001; 
}
bool checknotas(float valorpago){
    return fmod(valorpago, 5) == 0;
}

int main() {
    float valorpagamento, valorpago, troco;
    cout << "Caixa de Pagamento\n So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>:\n\nValor a pagar: ";
    cin >> valorpagamento;
    if (temdoisdecimais(valorpagamento)==true)
    {
        cout << "Introduza o valor do pagamento: ";
    cin >> valorpago;
    if (temdoisdecimais(valorpago)==false || !checknotas(valorpago)==true){
        cout << "\n\nValor invalido para pagamento!";
        return 0;
    }
    else{
        troco=valorpago-valorpagamento;
    if (troco<-0.01) {
        cout << "\n\nValor insuficiente para pagamento!";
        cout << "\n\nTroco: " << troco;
    } 
    else if ( temdoisdecimais(troco)==false)
    {
        cout << "\n\nValor invalido para pagamento!";
    }
    
    else {
        cout << "\n\nTroco: " << troco;
        if (troco>=500) {
            cout << "\n\nNotas de 500 euros: " << trunc(troco/500);
            troco=troco-500*(int)(troco/500);
        }
        if (troco>=200) {
            cout << "\nNotas de 200 euros: " << trunc(troco/200);
            troco=troco-200*(int)(troco/200);
        }
        if (troco>=100) {
            cout << "\nNotas de 100 euros: " << trunc(troco/100);
            troco=troco-100*(int)(troco/100);
        }
        if (troco>=50) {
            cout << "\nNotas de 50 euros: " << trunc(troco/50);
            troco=troco-50*(int)(troco/50);
        }
        if (troco>=20) {
            cout << "\nNotas de 20 euros: " << trunc(troco/20);
            troco=troco-20*(int)(troco/20);
        }
        if (troco>=10) {
            cout << "\nNotas de 10 euros: " << trunc(troco/10);
            troco=troco-10*(int)(troco/10);
        }
        if (troco>=5) {
            cout << "\nNotas de 5 euros: " << trunc(troco/5);
            troco=troco-5*(int)(troco/5);
        }
        if (troco>=2) {
            cout << "\nMoedas de 2 euro: " << trunc(troco/2);
            troco=troco-2*(int)(troco/2);
        }
        if (troco>=1) {
            cout << "\nMoedas de 1 euro: " << trunc(troco/1);
            troco=troco-1*(int)(troco/1);
        }
        if (troco>=0.5) {
            cout << "\nMoedas de 50 centimos: " << trunc(troco/0.5);
            troco=troco-0.5*(int)(troco/0.5);
        }
        if (troco>=0.2) {
            cout << "\nMoedas de 20 centimos: " << trunc(troco/0.2);
            troco=troco-0.2*(int)(troco/0.2);
        }
        if (troco>=0.1) {
            cout << "\nMoedas de 10 centimos: " << trunc(troco/0.1);
            troco=troco-0.1*(int)(troco/0.1);
        }
        if (troco>=0.05) {
            cout << "\nMoedas de 5 centimos: " << trunc(troco/0.05);
            troco=troco-0.05*(int)(troco/0.05);
        }
        if (troco>=0.02) {
            cout << "\nMoedas de 2 centimos: " << trunc(troco/0.02);
            troco=troco-0.02*(int)(troco/0.02);
        }
        if (troco>=0.01) {
            cout << "\nMoedas de 1 centimo: " << trunc(troco/0.01);
            troco=troco-0.01*(int)(troco/0.01);
        }

        
    }
    }
    }
    else{
        cout << "\n\nValor invalido para pagamento!";
    }
    
    
    
}