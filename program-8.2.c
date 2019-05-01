// Program 8.2
// Abstract in-place merge

#include "item_int.h"

#define maxN [100];

Item aux[maxN];

void merge(Item a[], int l, int m, int r) {
    int i, j, k;
    for (i = m + 1; i > l; i--)
        aux[i - 1] = a[j - 1];
    for (j = m; j < r; j++)
        aux[r + m - j] = a[j + 1];
    for (k = l; i <= r; k++)
        if (less(aux[j], aux[i]))
            a[k] = aux[j--];
        else
            a[k] = aux[i++];
}
