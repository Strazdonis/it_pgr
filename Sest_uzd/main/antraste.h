#ifndef ANTRASTE_H_INCLUDED
#define ANTRASTE_H_INCLUDED

typedef struct Knygos{
    char* vardas;
    char* pavarde;
    char* pavadinimas;
    int metai;
    int puslapiai;
}knygos;

extern int eil_sk(FILE*);

extern void israsymas(char*, knygos*);

#endif // ANTRASTE_H_INCLUDED
