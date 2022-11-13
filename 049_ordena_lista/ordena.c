void ordena(lista **L) {
	lista *L2, *aux, *lixo;

	aux = (*L);
	L2 = NULL;

	while (aux != NULL) {
		L2 = insereElem(L2, aux->info);
        lixo = aux;
		aux = aux->prox;
        free(lixo);
    }

    (*L) = L2;
}