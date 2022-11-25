lista *insere2(lista *L, int elem) {
	lista *pre, *el;
	if (!busca(L, 20, &pre)) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		if ((L == NULL) || pre == NULL) {
            el->prox = L;
            L = el;
		} else {
            el->prox = pre->prox;
            pre->prox = el;
		}
	}
    return L;
}