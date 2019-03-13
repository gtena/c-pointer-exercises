//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>
#include <stdlib.h>

struct pointer {
    int a;

};
void run_array_of_pointers() {
    printf("Running array of pointers\n");

    //allocate 10 pointers, effectively an array
    struct pointer **p_array = malloc(10 * sizeof(struct pointer *));

    //allocate 10 structs and have the array point to them
    for (int i = 0; i < 10; i++) {
        p_array[i] = malloc(sizeof(struct pointer));
    }

    //a pointer to the array
    struct pointer ***p = &p_array;

    //fill each pointer.a with a number
    for (int i = 0; i < 10; i++) {
        p_array[i]->a = i + 1;
        printf("%3d ", (*p)[i]->a);
    }
    printf("\n");
    /*for (int i = 0; i < 10; i++) {

        printf("%3d ", (*p)[i]->a);
    }*/
    free(p_array);
    p_array = NULL;
}

/*
 #### Array of pointers
1. Define a structure.
2. Allocate a *dynamic* array of **pointers** to structures. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Free all dynamic memory. Mind the order to avoid leaving dangling pointers!
5. Step through the code with the debugger.
 */