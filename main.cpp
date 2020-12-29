/*Write a program in C which will ask user for:
•
an integer number display it with hexadecimal system ( use %x and %#
•
a double number display it with e notation use %
•
one character display it on a screen and its value from ASCII table
•
string consists of two word use fgets () function to read text and display it by puts ()
function */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double y;
    char a;
    char slowa [30];

    printf("Podaj liczbe calkowita\n");
    scanf ("%d", &x);
    printf("Twoja liczba to %d\n",x);
    printf("Twoja liczba w systemie szesnastkowym to %x (%#x)\n",x,x );

    printf("Podaj liczbe przecinkowa \n");
    scanf ("%f", &y);
    printf("Twoja liczba to %E\n",y);

    printf("Podaj litere\n");
    getchar();
    scanf ("%c", &a);
    printf("Twoja litera to %c i ma wartosc %x\n", a, a);


    printf("Podaj dwa wyrazy\n");
    getchar();
    fgets(slowa, sizeof(slowa), stdin);
    puts(slowa);
    return 0;
}
