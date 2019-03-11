//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct s {
    int a;
    int b;
};

void run_local_array() {
    printf("Running local array\n");

    struct s int_array[2] = {
            {},
            {}

    };

}

/*
 * #### Local array
1. Define a structure.
2. Declare a *static* array of structures, inside a function. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Step through the code with the debugger.

 */