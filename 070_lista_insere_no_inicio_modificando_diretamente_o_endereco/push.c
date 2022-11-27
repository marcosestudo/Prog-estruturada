void insereNoInicio1(lista **L, int elem) {
	lista *el;
	el = (lista *)malloc(sizeof(lista *));
	el->info = elem;
	el->prox = (*L);
	(*L) = el;
}