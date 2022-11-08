
lista *insereElem(lista *L, int elem) {
  lista *pre, *no;
  if (!buscaElem(L, elem, &pre)) {
    no = (lista *)malloc(sizeof(lista));
    no->info = elem;
    if (L == NULL || pre == NULL) { 
      no->prox = L;
      L = no;
    } else {
      no->prox = pre->prox;
      pre->prox = no;
    }
  }
  return L;
}
