ListaEncadeada::ListaEncadeada() {
    this->aux = NULL;
    this->inicio = NULL;
    this->fim = NULL;
}

void ListaEncadeada::menu() {

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
        case 0:
            cout << "Saindo" << endl;
            break;
    }
}

void ListaEncadeada::inserir() {
    int num;
    cout << "Informe o elemento que deseja adicionar: ";
    cin >> num;

    if (this->jaExiste(num)) {
        cout << "Elemento já existe na lista" << endl;
    } else {
        this->aux = (struct no*) malloc(sizeof (aux));

        this->aux->num = num;
        this->aux->ant = NULL;
        this->aux->prox = NULL;

        if (this->inicio == NULL) {
            this->inicio = this->aux;
        } else {
            this->fim->prox = this->aux;
            this->aux->ant = this->fim;
        }

        this->fim = this->aux;
        this->fim->prox = NULL;
    }
}

bool ListaEncadeada::jaExiste(int num){
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        if(this->aux->num == num){
            return true;
        }
    }
    
    return false;
}

void ListaEncadeada::listar() {
    cout << "Elementos: ";
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->num << "   ";
    }
    cout << endl;
}

void ListaEncadeada::remover() {
    int chave;
    cout << "Informe o elemento que deseja remover: ";
    cin >> chave;

    bool encontrado = false;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->num == chave) {

            if (this->aux == this->fim) {
                this->aux->ant->prox = NULL;
                this->fim = this->aux->ant;
            } else if (this->aux == this->inicio) {
                this->aux->prox->ant = NULL;
                this->inicio = this->aux->prox;
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

