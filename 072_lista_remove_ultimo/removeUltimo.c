int removeUltimo(lista **L) {
	lista *pre, *lixo;
	int removido;

	if ((*L) != NULL) {
		lixo = (*L);
		pre = NULL;

		while (lixo->prox != NULL) {
			pre = lixo;
			lixo = lixo->prox;
		}

		if (pre == NULL) {
			(*L) = NULL;
		} else {
			pre->prox = NULL;
		}
		removido = lixo->info;
		free(lixo);
	} else {
		printf("\nLista vazia");
	}

	return removido;
}