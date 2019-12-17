#ifndef FUNKCIJOS_H_INCLUDED
#define FUNKCIJOS_H_INCLUDED

int eil_sk(FILE* f) {
    rewind(f); //faila skaityti nuo pradziu
    char c;
    int pabaiga = 0, sk = 0;
    while (!pabaiga) {
        c = fgetc(f);
        if (c == EOF) {
            pabaiga = 1;
        }

        else if (c == '\n') {
            sk++;
        }
    }
    rewind(f); //faila skaityti nuo pradziu
    return sk;
}

void israsymas(char *failas, knygos* duom) {
    FILE *isejimas = fopen(failas, "a"); //sukuria jei neegzistuoja
    if (!isejimas) {
        printf("nepavyko sukurti failo %s.\n", failas);
        return;
    }
    fprintf(isejimas, "%s %s %s %d %d\n",
            duom->vardas,duom->pavarde,duom->pavadinimas,
            duom->metai,duom->puslapiai
            );
    fclose(isejimas);
}

#endif // FUNKCIJOS_H_INCLUDED
