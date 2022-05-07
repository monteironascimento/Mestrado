
Pilha* pilha_clone(Pilha* p){

    Pilha* p2 = pilha_criar();

    int elemento;

    int resultado = pilha_desempilhar(p, &elemento);
    while(resultado){

        resultado = pilha_desempilhar(p, &elemento);
        pilha_empilhar(p2, elemento);
    }

    Pilha* pFinal = pilha_criar();

    resultado = pilha_desempilhar(p2, &elemento);
    while(resultado){

        resultado = pilha_desempilhar(p2, &elemento);
        pilha_empilhar(pFinal, elemento);
    }    

    return pFinal;
};

void pilha_inverter(Pilha* p){

    Pilha* p2 = pilha_criar();

    int elemento;

    int resultado = pilha_desempilhar(p, &elemento);
    while(resultado){

        resultado = pilha_desempilhar(p, &elemento);
        pilha_empilhar(p2, elemento);
    }

    p = p2;

};


bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor){
    
    if(!pilha_ehValida(p)) return false;

    for(int i = 0; i <= tamVetor ; i++){
        pilha_empilhar(p, vetor[i]);
    }

    return true;

};