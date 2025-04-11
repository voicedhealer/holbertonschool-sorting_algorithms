# **holbertonschool-sorting_algorithms**

Ce dépôt contient des implémentations de divers algorithmes de tri en C, ainsi que des outils pour analyser leurs performances et comprendre leur fonctionnement.

---

## **Objectifs du projet**
- Apprendre les bases des algorithmes de tri.
- Comprendre les différences en termes de complexité temporelle et spatiale entre différents algorithmes.
- Implémenter des algorithmes classiques comme _Bubble Sort_, _Insertion Sort_, _Merge Sort_, etc.
- Visualiser les étapes intermédiaires des algorithmes pour mieux comprendre leur logique.

---

## **Contenu du dépôt**

### **Fichiers principaux**
| Fichier                 | Description                                                                 |
|-------------------------|-----------------------------------------------------------------------------|
| `0-bubble_sort.c`       | Implémentation de l'algorithme Bubble Sort.                                |
| `1-insertion_sort.c`    | Implémentation de l'algorithme Insertion Sort.                             |
| `2-selection_sort.c`    | Implémentation de l'algorithme Selection Sort.                             |
| `3-quick_sort.c`        | Implémentation de l'algorithme Quick Sort.                                 |
| `100-shell_sort.c`      | Implémentation de l'algorithme Shell Sort.                                 |
| `101-cocktail_sort.c`   | Implémentation de l'algorithme Cocktail Shaker Sort.                       |
| `102-counting_sort.c`   | Implémentation de l'algorithme Counting Sort (tri par dénombrement).       |
| `103-merge_sort.c`      | Implémentation de l'algorithme Merge Sort (tri fusion).                   |
| `104-heap_sort.c`       | Implémentation de l'algorithme Heap Sort (tri par tas).                   |
| `105-radix_sort.c`      | Implémentation de l'algorithme Radix Sort (tri par base).                 |
| `print_array.c`         | Fonction utilitaire pour afficher un tableau d'entiers.                   |
| `sort.h`                | Fichier d'en-tête contenant les prototypes des fonctions et les macros.    |

---

### **Structure du projet**
```
holbertonschool-sorting_algorithms/
├── 0-bubble_sort.c
├── 1-insertion_sort.c
├── 2-selection_sort.c
├── 3-quick_sort.c
├── 100-shell_sort.c
├── 101-cocktail_sort.c
├── 102-counting_sort.c
├── 103-merge_sort.c
├── 104-heap_sort.c
├── 105-radix_sort.c
├── print_array.c
├── sort.h
└── README.md
```

---

## **Pré-requis**
- **Système d'exploitation** : Linux ou macOS.
- **Compilateur** : GCC (version 4.8 ou supérieure).
- **Normes** : Les fichiers respectent la norme C89.

---

## **Compilation**
Pour compiler tous les fichiers :
```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort_algorithms
```

---

## **Exécution**
Exemple d'exécution avec un tableau donné :
```bash
./sort_algorithms
```

---

## **Algorithmes implémentés**

### Bubble Sort
- Complexité temporelle :
  - Meilleur cas : $$O(n)$$
  - Pire cas : $$O(n^2)$$
- Complexité spatiale : $$O(1)$$

### Insertion Sort
- Complexité temporelle :
  - Meilleur cas : $$O(n)$$
  - Pire cas : $$O(n^2)$$
- Complexité spatiale : $$O(1)$$

### Merge Sort
- Complexité temporelle : $$O(n \log n)$$
- Complexité spatiale : $$O(n)$$

### Quick Sort
- Complexité temporelle :
  - Meilleur cas : $$O(n \log n)$$
  - Pire cas : $$O(n^2)$$
- Complexité spatiale : $$O(\log n)$$

(Et ainsi de suite pour les autres algorithmes...)

---

## **Fonctions utilitaires**
### `print_array`
Affiche un tableau d'entiers sous la forme suivante :
```c
void print_array(const int *array, size_t size);
```

Exemple d'utilisation :
```c
int array[] = {10, 3, 5, 7};
size_t size = sizeof(array) / sizeof(array[0]);
print_array(array, size);
```

---

## **Contributeurs**
Projet réalisé dans le cadre du programme Holberton School par :
- [Vivien Bernardot](https://github.com/voicedhealer)

---

## **Licence**
Ce projet est sous licence MIT. Vous êtes libre de le modifier et de le redistribuer.

---

Si vous souhaitez ajouter ou modifier quelque chose dans ce fichier, faites-le-moi savoir ! 😊

Citations:
[1] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/53127066/1f9c46bc-92cd-441f-b85b-e9c95d9b86cc/paste.txt

---