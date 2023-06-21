#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct livro
{
    char titulo[30];
    int ano;
    int pags;
    float valor;
};

int main ()
{
    struct livro livros [5];
    int i, soma, store,j;
    char k;
    for (i=0; i<5; i++)
    {
        printf ("Titulo do %d%c livro________:", i+1, 167);
        fflush (stdin);
        fgets (livros[i].titulo,30, stdin);

        printf ("Ano de publicacao___________:");
        scanf ("%d", &livros[i].ano);
        getchar ();

        printf ("Numero de paginas___________:");
        scanf ("%d", &livros[i].pags);
        getchar ();

        printf ("Preco do livro______________:");
        scanf ("%f", &livros[i].valor);
        getchar ();

        printf ("\n");
}
system ("CLS");
puts ("Imprimindo dados\n");

 for (i=0;i<5;i++)
 {
     printf ("\nTitulo do %d%c livro________:%s", i+1, 167, livros[i].titulo);
     printf ("Ano de publicacao___________:%d\n", livros [i].ano);
     printf ("Numero de paginas___________:%d\n", livros[i].pags);
     printf ("Preco do livro______________:%.2f\n", livros [i].valor);
printf ("\n");
 }
 soma=0;
      for (i=0; i<5;i++)
                    {
                            soma= soma+livros[i].pags;
                    }
                    printf ("\nO numero medio de paginas dos livros eh %d",soma/2 );

                     int menorValor = livros[0].valor;
                     int menorValors = 0;

                            for (i=0; i<5;i++)
                            {
                                if (livros[i].valor < menorValor)
                                     {
                                        menorValor = livros[i].valor;
                                        menorValors = i;
                                     }
printf ("\n");
                            }
printf ("\nO livro %s eh o mais barato e custa %.2f",livros[menorValors].titulo, livros[menorValors].valor);
return 0;
}
