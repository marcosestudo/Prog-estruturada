int busca(lista *L, int elem, lista **pre) {
	lista *aux, *preL;
	aux = L;
    preL = NULL;
    while ((aux != NULL) && (elem > aux->info)) {
        preL = aux;
        aux = aux->prox;
    }
    (*pre) = preL;
    if ((aux != NULL) && (elem == aux->preL)) {
        return 1;
    }
    return 0;
}