#include <stddef.h>

/**
 * print_array - Affiche un tableau d'entiers
 * @array: Le tableau à afficher
 * @size: Taille du tableau
 */
void print_array(const int *array, size_t size) {
    size_t i;
    
    for (i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}

/**
 * bubble_sort - Trie un tableau d'entiers avec l'algorithme de tri à bulles
 * @array: Tableau à trier
 * @size: Taille du tableau
 */
void bubble_sort(int *array, size_t size) {
    size_t i, j;
    int swapped;
    
    if (array == NULL || size < 2)
        return;
    
    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
                print_array(array, size);
            }
        }
        if (!swapped)
            break;
    }
}
