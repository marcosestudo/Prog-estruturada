int removePrimeiro(lista **L) {
	lista *lixo;
	int popped;

	if ((*L) != NULL) {
		popped = (*L)->info;
		lixo = (*L);
		(*L) = (*L)->prox;
		free(lixo);
	} else {
		printf("\nLista vazia");
	}

	return popped;
}