void mostraLista(lista *L) {
  lista *pre, *aux;
  aux = L;
  
  while (aux != NULL) {
    printf("%d ", aux->info);
    pre = aux;
    aux = aux->prox;
  }
}