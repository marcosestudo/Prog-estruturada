fila *saiDaFilaComRetorno(fila *F, int *primeiroDaFila) {
	fila *lixo;

	lixo = F;
	F = lixo->prox;

	free(lixo);

	return F;
}