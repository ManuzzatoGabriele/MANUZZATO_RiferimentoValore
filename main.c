#include <stdio.h>

void Dividi(int a, int b, int *q, int *r) {
    *q = a/b;
    *r = a%b;
}


void Trasforma(int s, int *ore, int *minuti, int *secondi) {
    *ore = s / 3600;
    *minuti = (s % 3600) / 60;
    *secondi = s % 60;
}

int Eleva(int a, int b) {
    for (int i = 0; i < b, i++) {
        a *= a;
    }

    return a;
}

void Esercizio3(int *primo, int *secondo) {
    *primo = Eleva(*primo, *secondo);
    *secondo = Eleva(*secondo, *primo);
}



int main(void) {
    int a, b, q, r;
    a = 10;
    b = 3;
    Dividi(a, b, &q, &r);


    int s, ore, minuti, secondi;
    s = 5000;

    Trasforma(s, &ore, &minuti, &secondi);

    int primo, secondo;

    Esercizio3(&primo, &secondo);

    return 0;
}

