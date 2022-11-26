lista *remove2(lista *L, int elem) {
	lista *pre, *lixo;
	if (busca(L, elem, &pre)) {
		if (L->info == elem) {
			lixo = L;
			L = lixo->prox;
		} else {
			lixo = pre->prox;
			pre->prox = lixo->prox;
		}
		free(lixo);
		printf("\nRemovido: %d", elem);
	} else {
		printf("\nElemento nao encontrado: %d", elem);
	}
	return L;
}