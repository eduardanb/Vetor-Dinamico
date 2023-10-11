#include <iostream>
using namespace std;

struct dados
{
    string nome;
    int idade;
};

dados* vetor(int tam){
    dados *vet;
    vet = new dados[tam];
    return vet;
}

void ler(dados *vet, int tam){
    for(int i=0; i<tam; i++){
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Idade: ";
        cin >> vet[i].idade;
        cout << "---------------------" << endl;
    }
}

void imprimir(dados *vet, int tam){
    for(int i=0; i<tam; i++){
        cout << vet[i].nome << endl;
        cout << vet[i].idade << endl;
    }
    cout << endl;
}

int verificar(dados *vet, int tam){
    int id = 0;
    for(int i=0; i<tam; i++){
        if(vet[i].idade > vet[id].idade){
            id = i;
        }
    }
    return id;
}

int main(){
    int tam;
    cout << "Tamanho do Vetor: ";
    cin >> tam;

    dados *vet = vetor(tam);
    ler(vet, tam);
    int mais_velho = verificar(vet, tam);
    cout << "Maior idade: " << vet[mais_velho].idade << endl;
    return 0;
}