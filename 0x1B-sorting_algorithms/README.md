# 0x1B. C - Sorting algorithms & Big O

## Description
What you should learn from this project:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

### Resources
* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.toptal.com/developers/sorting-algorithms)

### Data Structure and Functions

* For this project you are given the following `print_array`, and `print_list` functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

---

### [0. Bubble sort](./0-bubble_sort.c)

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm

* Prototype: `void bubble_sort(int *array, size_t size);`
* You’re expected to print the array after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

[Video](https://youtu.be/lyZQPjUT5B4)

```
alex@/tmp/sort$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```
Directory: 0x1B-sorting_algorithms
File: 0-bubble_sort.c, 0-O


### [1. Insertion sort](./1-insertion_sort_list.c)

Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) algorithm
* Prototype: `´void insertion_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

[Video](https://youtu.be/ROalU379l3U)

```
alex@/tmp/sort$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 1-insertion_sort_list.c, 1-O


### [2. Selection sort](./2-selection_sort.c)

Write a function that sorts an array of integers in ascending order using the [Selection sort](https://en.wikipedia.org/wiki/Selection_sort) algorithm
* Prototype: `void selection_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

[Video](https://youtu.be/Ns4TPTC8whw)

```
alex@/tmp/sort$ cat 2-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
alex@/tmp/sort$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 2-selection_sort.c, 2-O


### [3. Quick sort](./3-quick_sort.c)

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm
* Prototype: `void quick_sort(int *array, size_t size);`
* You must implement the `Lomuto` partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
* in the best case
* in the average case
*in the worst case

```
alex@/tmp/sort$ cat 3-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 3-quick_sort.c, 3-O


### [4. Shell sort - Knuth Sequence](./100-shell_sort.c)

Write a function that sorts an array of integers in ascending order using the [Shell sort](https://en.wikipedia.org/wiki/Shellsort) algorithm, using the `Knuth sequence`
* Prototype: `void shell_sort(int *array, size_t size);`
* You must use the following sequence of intervals (a.k.a the Knuth sequence):
  * `n+1 = n * 3 + 1`
  * ` 1, 4, 13, 40, 121, ...`
* You’re expected to print the `array` each time you decrease the interval (See example below).

```
alex@/tmp/sort$ cat 100-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-shell_sort.c print_array.c -o shell
alex@/tmp/sort$ ./shell
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

13, 7, 96, 71, 19, 48, 99, 73, 86, 52
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 100-shell_sort.c


### [5. Cocktail shaker sort](./101-cocktail_sort_list.c)

Write a function that sorts a doubly linked list of integers in ascending order using the [Cocktail shaker sort](https://en.wikipedia.org/wiki/Cocktail_shaker_sort) algorithm
*Prototype: `void cocktail_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `101-O`, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

```
alex@/tmp/sort$ cat 101-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    cocktail_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-cocktail_sort_list.c print_list.c -o cocktail
alex@/tmp/sort$ ./cocktail
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 71, 13, 52, 96, 73, 7, 86, 99
19, 48, 71, 13, 52, 96, 7, 73, 86, 99
19, 48, 71, 13, 52, 7, 96, 73, 86, 99
19, 48, 71, 13, 7, 52, 96, 73, 86, 99
19, 48, 71, 7, 13, 52, 96, 73, 86, 99
19, 48, 7, 71, 13, 52, 96, 73, 86, 99
19, 7, 48, 71, 13, 52, 96, 73, 86, 99
7, 19, 48, 71, 13, 52, 96, 73, 86, 99
7, 19, 48, 13, 71, 52, 96, 73, 86, 99
7, 19, 48, 13, 52, 71, 96, 73, 86, 99
7, 19, 48, 13, 52, 71, 73, 96, 86, 99
7, 19, 48, 13, 52, 71, 73, 86, 96, 99
7, 19, 13, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 101-cocktail_sort_list.c, 101-O


### [6. Counting sort](./102-counting_sort.c)

Write a function that sorts an array of integers in ascending order using the [Counting sort](https://en.wikipedia.org/wiki/Counting_sort) algorithm
* Prototype: `void counting_sort(int *array, size_t size);`
* You can assume that `array` will contain only numbers `>= 0`
* You are allowed to use `malloc` and `free` for this task
* You’re expected to print your counting array once it is set up (See example below)
  * This array is of size `k + 1` where `k` is the largest number in `array`

Write in the file `102-O`, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

```
alex@/tmp/sort$ cat 102-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    counting_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-counting_sort.c print_array.c -o counting
alex@/tmp/sort$ ./counting
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 10

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 102-counting_sort.c, 102-O


### [7. Merge sort](./103-merge_sort.c)

Write a function that sorts an array of integers in ascending order using the [Merge sort](https://en.wikipedia.org/wiki/Merge_sort) algorithm
* Prototype: `void merge_sort(int *array, size_t size);`
* You must implement the `top-down` merge sort algorithm
  * When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. `{1, 2, 3, 4, 5}` -> `{1, 2}, {3, 4, 5}`
  * Sort the left array before the right array
* You are allowed to use `printf`
* You are allowed to use `malloc` and free only once (only one call)
* Output: see example

Write in the file `103-O`, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

```
alex@/tmp/sort$ cat 103-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    merge_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-merge_sort.c print_array.c -o merge
alex@/tmp/sort$ ./merge
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
Merging...
[left]: 71
[right]: 13
[Done]: 13, 71
Merging...
[left]: 99
[right]: 13, 71
[Done]: 13, 71, 99
Merging...
[left]: 19, 48
[right]: 13, 71, 99
[Done]: 13, 19, 48, 71, 99
Merging...
[left]: 52
[right]: 96
[Done]: 52, 96
Merging...
[left]: 86
[right]: 7
[Done]: 7, 86
Merging...
[left]: 73
[right]: 7, 86
[Done]: 7, 73, 86
Merging...
[left]: 52, 96
[right]: 7, 73, 86
[Done]: 7, 52, 73, 86, 96
Merging...
[left]: 13, 19, 48, 71, 99
[right]: 7, 52, 73, 86, 96
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 103-merge_sort.c, 103-O


### [8. Heap sort](./104-heap_sort.c)

Write a function that sorts an array of integers in ascending order using the [Heap sort](https://en.wikipedia.org/wiki/Heapsort) algorithm
* Prototype: void heap_sort(int *array, size_t size);
* You must implement the sift-down heap sort algorithm
* You’re expected to print the array after each time you swap two elements (See example below)

Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:
* in the best case
* in the average case
*in the worst case

```
alex@/tmp/sort$ cat 104-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    heap_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-heap_sort.c print_array.c -o heap
alex@/tmp/sort$ ./heap
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 99, 86, 13, 52, 96, 73, 71, 7
19, 86, 99, 48, 13, 52, 96, 73, 71, 7
19, 86, 99, 73, 13, 52, 96, 48, 71, 7
99, 86, 19, 73, 13, 52, 96, 48, 71, 7
99, 86, 96, 73, 13, 52, 19, 48, 71, 7
7, 86, 96, 73, 13, 52, 19, 48, 71, 99
96, 86, 7, 73, 13, 52, 19, 48, 71, 99
96, 86, 52, 73, 13, 7, 19, 48, 71, 99
71, 86, 52, 73, 13, 7, 19, 48, 96, 99
86, 71, 52, 73, 13, 7, 19, 48, 96, 99
86, 73, 52, 71, 13, 7, 19, 48, 96, 99
48, 73, 52, 71, 13, 7, 19, 86, 96, 99
73, 48, 52, 71, 13, 7, 19, 86, 96, 99
73, 71, 52, 48, 13, 7, 19, 86, 96, 99
19, 71, 52, 48, 13, 7, 73, 86, 96, 99
71, 19, 52, 48, 13, 7, 73, 86, 96, 99
71, 48, 52, 19, 13, 7, 73, 86, 96, 99
7, 48, 52, 19, 13, 71, 73, 86, 96, 99
52, 48, 7, 19, 13, 71, 73, 86, 96, 99
13, 48, 7, 19, 52, 71, 73, 86, 96, 99
48, 13, 7, 19, 52, 71, 73, 86, 96, 99
48, 19, 7, 13, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
19, 13, 7, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 104-heap_sort.c, 104-O


### [9. Radix sort](./105-radix_sort.c)

Write a function that sorts an array of integers in ascending order using the [Radix sort](https://en.wikipedia.org/wiki/Radix_sort) algorithm
* Prototype: `void radix_sort(int *array, size_t size);`
* You must implement the `LSD` radix sort algorithm
* You can assume that `array` will contain only numbers `>= 0`
* You are allowed to use `malloc` and `free` for this task
* You’re expected to print the `array` each time you increase your `significant digit` (See example below)

Write in the file `105-O`, the big O notations of the time complexity of the LSD Radix sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

```
alex@/tmp/sort$ cat 105-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    radix_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 105-main.c 105-radix_sort.c print_array.c -o radix
alex@/tmp/sort$ ./radix
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

71, 52, 13, 73, 96, 86, 7, 48, 19, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 105-radix_sort.c, 105-O


### [10. Bitonic sort](./106-bitonic_sort.c)

Write a function that sorts an array of integers in ascending order using the [Bitonic sort](https://en.wikipedia.org/wiki/Bitonic_sorter) algorithm
* Prototype: `void bitonic_sort(int *array, size_t size);`
* You can assume that `size` will be equal to `2^k`, where `k >= 0` (when `array` is not `NULL` …)
* You are allowed to use `printf`
* You’re expected to print the `array` each time you swap two elements (See example below)
* Output: see example

Write in the file `106-O`, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:
* in the best case
* in the average case
*in the worst case


### [11. Quick Sort - Hoare Partition scheme](./107-quick_sort_hoare.c)

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm
* Prototype: `void quick_sort_hoare(int *array, size_t size);`
* You must implement the `Hoare` partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `107-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

```
alex@/tmp/sort$ cat 107-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort_hoare(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 107-main.c 107-quick_sort_hoare.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 19, 99, 71, 13, 52, 96, 73, 86, 48
7, 19, 13, 71, 99, 52, 96, 73, 86, 48
7, 13, 19, 71, 99, 52, 96, 73, 86, 48
7, 13, 19, 48, 99, 52, 96, 73, 86, 71
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 86, 73, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

Directory: 0x1B-sorting_algorithms
File: 107-quick_sort_hoare.c, 107-O


### [12. Dealer](./1000-sort_deck.c)

Write a function that sorts a deck of cards.
* Prototype: void sort_deck(deck_node_t **deck);
* You are allowed to use the C standard library function qsort
* Please use the following data structures:

```
typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
```

---

## Author
* **Nga La** - [sungnga](https://github.com/sungnga)