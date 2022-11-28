void insereNoFim1(lista **L, int elem) {
	lista *aux, *el;

	aux = (*L);
	el = (lista *)malloc(sizeof(lista));
	el->info = elem;
	el->prox = NULL;

	if (aux != NULL) {
		while (aux->prox != NULL) {
			aux = aux->prox;
		}
		aux->prox = el;
	} else {
		(*L) = el;
	}
}