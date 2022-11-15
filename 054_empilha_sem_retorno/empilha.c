void empilhaSemRetorno(pilha **P, int elem) {
	pilha *el;

	el = (pilha *)malloc(sizeof(pilha *));
    el->info = elem;
    el->prox = (*P);
    (*P) = el;
}