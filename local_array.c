//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct s {
    int a;
    char b;
};

void run_local_array() {
    printf("Running local array\n");
    struct s s_array[2] = {
    };

    for (int i = 0; i < 2; i++) {
        s_array[i].a = i;
        s_array[i].b = 'a';
        printf("Array values are: %d %c\n", s_array[i].a, s_array[i].b);
    }
}

/*
 * #### Local array
1. Define a structure.
2. Declare a *static* array of structures, inside a function. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Step through the code with the debugger.

 */