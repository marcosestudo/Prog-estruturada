lista *insereNoInicio2(lista *L, int elem) {
	lista *el;
	el = (lista *)malloc(sizeof(lista));
	el->info = elem;
	el->prox = L;
	L = el;
	return L;
}
