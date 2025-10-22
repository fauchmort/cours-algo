#include <stdlib.h>
#include "sort.h"
#include "utils.h"

void selection_sort(int *arr, int n)
{
    for(int j=0; j<n; j++){
        int p=arr[j];
        int m;
        int e;
        for(int i=0; i<n; i++){
            int m=arr[0];
            if (arr[i]<m){
                m=arr[i];
                e=i;
            }
        }
        arr[j]=m;
        arr[e]=p;
    }
    return arr;
}

void insertion_sort(int *arr, int n)
{
    for(int i=0; i<n; i++){
        int k=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>k){     //decalage des valeurs
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=k;
    }
    return arr;
}

void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];      // echange des elements
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int *arr, int *tmp, int l, int m, int r)
{
    int i = l;      // indice du début de la première moitie
    int j = m + 1;  // indice du début de la seconde moitie
    int k = l;      // indice pour le tableau temporaire
    // Fusion dans tmp
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }
    while (i <= m)
        tmp[k++] = arr[i++];   // Copie de la première moitie
    while (j <= r)
        tmp[k++] = arr[j++];  // Copie de la seconde moitie
    for (i = l; i <= r; i++)
        arr[i] = tmp[i];    // Copie de la fusion dans le tableau original
}

void mergesort_rec(int *arr, int *tmp, int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2; // milieu
        mergesort_rec(arr, tmp, l, m);     // tri de gauche
        mergesort_rec(arr, tmp, m + 1, r); // tri de droite
        merge(arr, tmp, l, m, r);           // fusion
    }
}

void merge_sort(int *arr, int n)
{
    if (!arr || n <= 1)
        return;
    int *tmp = (int *)malloc((size_t)n * sizeof(int));
    if (!tmp)
        return;
    mergesort_rec(arr, tmp, 0, n - 1);
    free(tmp);
}

int partition(int *arr, int l, int r)
{
    int pivot = arr[r];   // dernier element comme pivot
    int i = l - 1;        // position du plus grand element plus petit que le pivot

    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // placer le pivot
    int temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;

    return i + 1; // renvoie l’indice du pivot
}

void quick_sort_rec(int *arr, int l, int r)
{
    if (l < r) {
        int p = partition(arr, l, r);  // position du pivot
        quick_sort_rec(arr, l, p-1);     // tri de gauche
        quick_sort_rec(arr, p+1, r);     // tri de droite
    }
}

void quick_sort(int *arr, int n)
{
    if (!arr || n <= 1)
        return;
    quick_sort_rec(arr, 0, n - 1);
}
