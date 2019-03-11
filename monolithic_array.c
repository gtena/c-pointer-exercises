//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

struct mono {
    int a;
    int b;
};

struct mono *mono_array = NULL;

void run_monolithic_array(struct mono **mono_array) {
    printf("Running monolithic array\n");
    *mono_array = malloc(10 * sizeof(struct mono));
    for (int i = 0; i < 2; i++) {
    (*mono_array)[0].a = 42;
    (*mono_array)[0].b = 75;
    printf("array values are: %d, %d\n", mono_array[0]->a, mono_array[0]->b);
    }

    free(mono_array);
    mono_array = NULL;
}

/*#### Monolithic array
1. Define a structure.
2. Allocate a *dynamic* array of structures. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Free all dynamic memory.
5. Step through the code with the debugger.
 */