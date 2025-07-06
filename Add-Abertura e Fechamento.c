void abrirCelula(int l, int c) {
    if(coordenadaEhValida(l, c) && !jogo[l][c].estaAberta) {
        jogo[l][c].estaAberta = 1;
        if(jogo[l][c].vizinhos == 0) {
            abrirCelula(l-1, c);
            abrirCelula(l+1, c);
            abrirCelula(l, c+1);
            abrirCelula(l, c-1);
        }
    }
}

void jogar() {
    int linha, coluna;
    do {
        printf("\nDigite as coordenadas (linha coluna): ");
        scanf("%d%d", &linha, &coluna);

        if(!coordenadaEhValida(linha, coluna))
            printf("Coordenadas invalidas! Use valores entre 0-9.\n");
    } while(!coordenadaEhValida(linha, coluna));

    abrirCelula(linha, coluna);
}
