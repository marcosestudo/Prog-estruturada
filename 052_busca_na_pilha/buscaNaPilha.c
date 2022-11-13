int buscaNaPilha(pilha *P, int elem) {
	if (P != NULL) {
		while (P != NULL) {
            if (P->info == elem) {
                return 1;
            }
            P = P->prox;
        }
	} else {
		printf("Pilha vazia");
	}

    return 0;
}