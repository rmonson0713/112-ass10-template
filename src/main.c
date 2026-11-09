/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>
#include <stdlib.h>
#include "code.h"

int main()
{
    // Part 1 + 3: qsort with the comparators
    int numbers[] = {5, 2, 9, 1, 7};
    sort_ints(numbers, 5, true);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    char names[4][NAME_LEN] = {"pear", "Zebra", "apple", "fig"};
    sort_names(names, 4, true);
    for (int i = 0; i < 4; i++)
    {
        printf("%s ", names[i]);
    }
    printf("\n");

    // Part 2: your own generic sort works for any type
    float values[] = {2.5f, -1.0f, 1.2f, 1.5f};
    bubble_sort(values, 4, sizeof(float), compare_float_asc);
    for (int i = 0; i < 4; i++)
    {
        printf("%.2f ", values[i]);
    }
    printf("\n");
    printf("sorted? %d\n", is_sorted_array(values, 4, sizeof(float), compare_float_asc));

    // Part 3: median and duplicates
    int data[] = {4, 1, 3, 2};
    float median;
    if (find_median(data, 4, &median))
    {
        printf("median = %.2f\n", median);
    }
    printf("duplicates: %d\n", has_duplicates(data, 4));

    // Part 3: students
    Student students[3] = {{"Zoe", 20, 90.0f}, {"Adam", 22, 85.5f}, {"Bob", 21, 90.0f}};
    rank_students(students, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s (%.1f)\n", i + 1, students[i].name, students[i].score);
    }

    return 0;
}
