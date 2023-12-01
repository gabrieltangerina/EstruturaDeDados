void Pilha::menu() {
    int escolha;

    cout << endl;
    cout << "[1] - Adicionar elemento" << endl;
    cout << "[2] - Remover elemento" << endl;
    cout << "[3] - Listar elementos" << endl;
    cout << "[4] - Para pesquisar" << endl;
    cout << "[5] - Para retornar elemento do meio" << endl;
    cout << "[6] - Para retornar endereço elemento do meio" << endl;
    cout << "[0] - Sair " << endl;
    cout << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            this->adicionar();
            this->menu();
            break;
        case 2:
            this->remover();
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
            this->retonarElementoMeio();
            this->menu();
            break;
        case 6:
            this->retornaEnderecoMeio();
            this->menu();
            break;
        case 0:
            cout << "Saindo..." << endl;
            break;
    }
}

void Pilha::adicionar() {
    int num;
    cout << "Informe o número que deseja adicionar na PILHA: ";
    cin >> num;

    this->aux = (struct no*) malloc(sizeof (this->aux));

    this->aux->num = num;
    this->aux->ant = this->topo;
    this->topo = this->aux;
}

void Pilha::remover() {
    if (this->topo != NULL) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        free(this->aux);
        cout << "Elemento desempilhado com SUCESSO!" << endl;
    }
}

void Pilha::listar(){
    cout << "Elementos: ";
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        cout << this->aux->num << "   ";
    }
    cout << endl;
}

void Pilha::pesquisar(){
    int chave, posicao = 0;
    bool encontrado = false;
    cout << "Informe o elemento para pesquisar: ";
    cin >> chave;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        posicao++;
        if(chave == this->aux->num){
            cout << "Elemento encontrado na posição " << posicao << endl;
            encontrado = true;
        }
    }
    
    if(!encontrado){
        cout << "Elemento não encontrado";
    }
}

int Pilha::calcularMeio(){
    int contador = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        contador++;
    }
    
    int meio = contador / 2;
    return meio+1;
}

int Pilha::retonarElementoMeio(){
    int meio = this->calcularMeio();
    int contador = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        contador++;
        if(contador == meio){
            cout << "Elemento meio: " << this->aux->num << endl;
            return this->aux->num;
        }
    }
    
}

no* Pilha::retornaEnderecoMeio(){
    int meio = this->calcularMeio();
    int contador = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        contador++;
        if(contador == meio){
            cout << "Endereço meio: " << this->aux << endl;
            return this->aux;
        }
    }
}
