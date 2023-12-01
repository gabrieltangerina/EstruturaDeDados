ListaCircular::ListaCircular() {
    this->aux = NULL;
    this->inicio = NULL;
    this->fim = NULL;
    this->tamanhoLista = 0;
}

void ListaCircular::menu() {

    int opc;
    cout << endl << "1 - Adicionar" << endl;
    cout << "2 - Listar" << endl;
    cout << "3 - Remover" << endl;
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
        case 3:
            this->remover();
            this->menu();
            break;
        case 0:;
            cout << "Saindo" << endl;
            break;
    }
}

void ListaCircular::inserir() {
    int num;
    cout << "Informe o número que deseja inserir: ";
    cin >> num;

    this->aux = (struct no*) malloc(sizeof (aux));

    this->aux->num = num;
    this->aux->ant = NULL;
    this->aux->prox = NULL;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
    } else {
        this->fim->prox = this->aux;
    }

    this->aux->ant = this->fim;
    this->fim = this->aux;
    this->fim->prox = this->inicio;
    this->tamanhoLista++;
}

void ListaCircular::listar() {
    int contador = 0;
    cout << "Elementos: ";
    for (this->aux = this->inicio; this->tamanhoLista > contador; this->aux = this->aux->prox) {
        contador++;
        cout << this->aux->num << "   ";
    }
    cout << endl;
}

void ListaCircular::remover() {
    int chave, contador = 0;
    cout << "Informe o elemento que deseja remover: ";
    cin >> chave;

    bool encontrado = false;

    for (this->aux = this->inicio; this->tamanhoLista > contador ; this->aux = this->aux->prox) {
        contador++;
        if (this->aux->num == chave) {
            if (this->aux == this->fim) {
                this->aux->ant->prox = this->inicio;
                this->aux->prox->ant = this->aux->ant;
                this->fim = this->fim->ant;
            } else if (this->aux == this->inicio) {
                this->aux->prox->ant = this->aux->ant;
                this->aux->ant->prox = this->aux->prox;
                this->inicio = this->inicio->prox;
            } else {
                this->aux->ant->prox = this->aux->prox;
                this->aux->prox->ant = this->aux->ant;
            }

            free(this->aux);
            cout << "Elemento removido com sucesso!" << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Elemento não encontrado" << endl;
    }
}
