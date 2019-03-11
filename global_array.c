//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct s {
    int a;
    int b;

};

struct s array[2] =  {
};

void run_global_array() {
    printf("Running global array\n");
    for (int i = 0; i < 2; i++) {
        //struct s s1 = {12,24};
        //struct s s2 = {48, 96};
        array[i].a = i;
        array[i].b = i + 1;
        printf("array values: %d %d\n", array[i].a, array[i].b);
    }
}

/*
 * #### Global array
1. Define a structure.
2. Declare a *static* array of structures, outside of any function. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Step through the code with the debugger.
 */