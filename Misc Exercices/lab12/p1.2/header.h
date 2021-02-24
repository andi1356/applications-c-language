#ifndef header_h
#define header_h

typedef struct _COMPLEX{
	double real, imag;
} COMPLEX;

void citire(COMPLEX *x);
void afisare(COMPLEX *x);
COMPLEX adunare(COMPLEX *x, COMPLEX *y);
COMPLEX *inmultire(COMPLEX *x,COMPLEX *y);
COMPLEX *conjugat(COMPLEX *x);
double modul(COMPLEX *x);


COMPLEX *citireSir(COMPLEX *x,int n);
void afisareSir(COMPLEX *x,int n);
void sumaIndice(COMPLEX *x,int n);

#endif
