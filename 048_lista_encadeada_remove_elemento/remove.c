lista *removeElem(lista *L, int elem) {
	lista *pre, *lixo;
	if (buscaElem(L, elem, &pre)) {
		if (L->info == elem) {
			lixo = L;
			L = L->prox;
		} else {
			lixo = pre->prox;
			pre->prox = lixo->prox;
		}
		free(lixo);
	}
	return L;
}