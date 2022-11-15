void desempilhaSemRetorno(pilha **P, int *desempilhado) {
    pilha *lixo;
    
    *desempilhado = (*P)->info;
    lixo = (*P);
    (*P) = lixo->prox;
    free(lixo);
}
