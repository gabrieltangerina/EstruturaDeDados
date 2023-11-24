#include "cListaDuplamente.h"
#include <iostream>

using namespace std;

cListaDuplamente::cListaDuplamente() {
    
    this->aux = NULL;
    this->fim = NULL;
    this->inicio = NULL;
    
}

cListaDuplamente::cListaDuplamente(const cListaDuplamente& orig) {
}

cListaDuplamente::~cListaDuplamente() {
}

void cListaDuplamente::menu() {

    int opc;
    cout << endl << "1 - Adicionar" << endl;
    cout << "2 - Listar" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->inserir();
            this->menu();
            break;
        case 2:
            this->listar();
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;
    }
}

void cListaDuplamente::inserir() {
    int num;
    cout << "Informe o número que será inserido na lista: ";
    cin >> num;

    this->aux = (struct no*)malloc(sizeof(aux));

    this->aux->num = num;
    this->aux->prox = NULL;
    this->aux->ant = NULL;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
        this->inicio->prox = NULL;
        this->inicio->ant = NULL;
    } else {
        this->fim->prox = this->aux;
        this->aux->ant = this->fim;
    }

    this->fim = this->aux;
}

void cListaDuplamente::listar() {
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->num << "   ";
    }
}

struct no* cListaDuplamente::pesquisar(int chave) {
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->num == chave) {
            return this->aux;
        }
    }

    return NULL;

}

void cListaDuplamente::remover() {

    int chave;
    cout << "Informe o elemento que deseja remover: ";
    cin >> chave;

    this->aux = this->pesquisar(chave);

    if (this->aux == this->inicio) {
        this->inicio = this->inicio->prox;
        this->inicio->ant = NULL;
    } else if (this->aux == this->fim) {
        this->fim = this->fim->ant;
        this->fim->prox = NULL;
    } else {
        this->aux->ant->prox = this->aux->prox;
        this->aux->prox->ant = this->aux->ant;
    }

    free(this->aux);

}
