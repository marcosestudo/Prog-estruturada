void mostraFila(fila *F) {
	if (F != NULL) {
		printf("|%d||", F->info);
		if (F->prox != NULL) {
			printf("->");
			mostraFila(F->prox);
		}
	}
}