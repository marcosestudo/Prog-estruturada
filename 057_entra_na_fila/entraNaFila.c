void entraNaFila(fila **F, int elem) {
	fila *aux, *el;

	el = (fila *)malloc(sizeof(fila *));
	el->info = elem;

	if ((*F) == NULL) {
		(*F) = el;
	} else {
		aux = (*F);
		while (aux->prox != NULL) {
			aux = aux->prox;
		}

		aux->prox = el;
	}
}