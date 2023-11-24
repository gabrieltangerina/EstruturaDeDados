#include "cPilha.h"
#include <iostream>

using namespace std;

cPilha::cPilha() {
    this->aux = NULL;
    this->topo = NULL;
    this->fim = NULL;
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

void cPilha::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Empilhar " << endl;
    cout << "[2] - Desempilhar" << endl;
    cout << "[3] - Listar " << endl;
    cout << "[4] - Pesquisar " << endl;
    cout << "[5] - Valor do meio da pilha " << endl;
    cout << "[6] - Endereço do meio da pilha " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->empilhar();
            this->menu();
            break;
        case 2:
            this->desempilhar();
            this->menu();
            break;
        case 3:
            this->listar();
            this->menu();
            break;
        case 4:
            this->pesquisar();
            this->menu();
            break;
        case 5:
            cout << this->retonarElementoMeio();
            this->menu();
            break;
        case 6:
            cout << this->retonarEnderecoMeio();
            this->menu();
            break;
        case 0:
            cout << "Saindo." << endl;
            break;
        default:
            cout << "Opcao Invalida. Insira novamente" << endl;
            this->menu();
    }

}

void cPilha::empilhar() {

    int num;

    cout << "Digite o valor para empilhar: ";
    cin >> num;

    this->aux = (struct no*) malloc(sizeof (aux));
    this->aux->ant = NULL;

    this->aux->num = num;
    this->aux->ant = this->topo;
    this->topo = this->aux;

}

void cPilha::listar() {
    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        cout << this->aux->num << " - ";
    }

    cout << endl;
}

void cPilha::desempilhar() {
    

    if (vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        cout << "\nO elemento desempilhado foi: " << this->aux->num << endl;
        free(this->aux);
    }
}

void cPilha::pesquisar(){
    int chave, posicao = 1;
    
    cout << "Informe o valor para pesquisar: ";
    cin >> chave;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        if(this->aux->num == chave){
            cout << "Elemento encontrado na " << posicao << " posição" << endl;
        }
        posicao++;
    }
}

bool cPilha::vazio(no *structEnviado) {
    if (structEnviado == NULL) {
        return false;
    } else {
        return true;
    }
}

int cPilha::calcularMeio(){
        int i = 0;

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        if (this->vazio(this->aux)) {
            i++;
        }
    }

    int meio = i / 2;

    return meio;
}

no* cPilha::retonarEnderecoMeio() {

    int meio = this->calcularMeio();
    int j = 0;

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        if (j == meio) {
            return this->aux;
        } else {
            j++;
        }
    }
}

int cPilha::retonarElementoMeio() {

    int meio = this->calcularMeio();
    int j = 0;

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        if (j == meio) {
            return this->aux->num;
        } else {
            j++;
        }
    }
}
