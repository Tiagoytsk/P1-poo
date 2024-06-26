#include <iostream>
#include <cmath>
#include <random>
using namespace std;

class pagamentos
{
private:
public:
    double valorpagamento, valorpago, troco;

    bool temdoisdecimais(double troco) {
    double aredondado = round(troco * 100) / 100;
    return abs(troco - aredondado) < 0.0001; 
    }

    bool checknotas(int valorpago){
    if (valorpago >= 5 && valorpago % 5 == 0){
        return true;
    }else{
        return false;
    }
}
    double valor_pagamento(){
        random_device rd;
        default_random_engine generator(rd()); 
        uniform_real_distribution<double> distribution(0.10,10.0);
        double valor = distribution(generator);
        valor = round(valor * 100.0) / 100.0;
        return valor; 
    }

    double trocof(double valorpagamento,double valorpago, double troco){
     cout << "\n\nTroco: " << troco;
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
        if (troco>=0.05 ) {
            cout << "\nMoedas de 5 centimos: " << trunc(troco/0.05);
            troco=troco-0.05*(int)(troco/0.05);
        }
        if (troco>=0.02) {
            cout << "\nMoedas de 2 centimos: " << trunc(troco/0.02);
            troco=troco-0.02*(int)(troco/0.02);
            troco = round(troco * 100) / 100;
            
        }

        if (abs(troco - 0.01) < 0.0001) {
            cout << "\nMoedas de 1 centimo: 1";
        }
        return 0;
}

}cliente;





//int pagamentos::trocof(float valorpagamento,float valorpago, float troco)

int main() {
    
    cliente.valorpagamento = cliente.valor_pagamento();
    cout << "Caixa de Pagamento\n So sao aceites notas <5, 10, 20, 50, 100, 200 e 500 euros>:\n\nValor a pagar: "<< cliente.valorpagamento << "\n\n";
    if (cliente.temdoisdecimais(cliente.valorpagamento)==true)
    {
        cout << "Introduza o valor do pagamento: ";
        cin >> cliente.valorpago;
        if (cliente.checknotas(cliente.valorpago)==false){
            cout << "\n\nValor invalido para pagamento!1";
            return 0;
        }
        else{
            cliente.troco=cliente.valorpago-cliente.valorpagamento;
            cout << "\n\nValor a pagar: " << cliente.valorpagamento;
            if (cliente.troco<-0.01 || cliente.temdoisdecimais(cliente.troco)== false) {
            cout << "\n\nValor insuficiente para pagamento!";
            cout << "\n\nTroco: " << cliente.troco;
            } 
            else {
                cliente.trocof(cliente.valorpagamento,cliente.valorpago,cliente.troco);
            }
        }
    }
    else{
        cout << "\n\nValor invalido para pagamento!2";
    }
    return 0;
}