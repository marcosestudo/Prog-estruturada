void saiDaFilaSemRetorno(fila **F, int *primeiroDaFila) {
	fila *lixo;

    *primeiroDaFila = (*F)->info;

	lixo = (*F);
	(*F) = lixo->prox;

	free(lixo);
}
