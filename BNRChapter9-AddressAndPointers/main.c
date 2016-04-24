//
//  main.c
//  BNRChapter9-AddressAndPointers
//
//  Created by RYAN ROSELLO on 4/17/16.
//  Copyright © 2016 RYAN ROSELLO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i = 17;
    printf("i stores its value at %p\n", &i);
    printf("this function starts at %p\n", main);
    
    int *addressOfi = &i;
    printf("addressOfi = %p\n", addressOfi);
    printf("*addressOfi (interger value) = %d\n", *addressOfi);
    
    *addressOfi = 89;
    printf("Now the value at *addressOfi  = %d\n", *addressOfi);
    
    printf("the size of i = %zu\n", sizeof(i));
    printf("the size of a pointer is = %zu\n", sizeof(int *));
    printf("the size of *addressOfi is = %zu\n", sizeof(addressOfi));
    
    
    
    float *myPointer;
    myPointer = NULL;
    
    if (myPointer) {
        // do something with myPointer?
        printf("myPointer value = %f\n", *myPointer);

    }
    else {
        // myPointer is null
        printf("myPointer value is NULL.\n\n\n");
        float f = 4.3;
        myPointer = &f;
    }
    
    printf("myPointer address is %p\n", myPointer);
    printf("myPointer's pointer uses %zu bytes of memory.\n", sizeof(myPointer));
    printf("the size of float uses %zu bytes of memory.\n", sizeof(float));
    printf("the size of float * uses %zu bytes of memory.\n", sizeof(float *));
    printf("the size of *myPointer uses %zu bytes of memory.\n", sizeof(*myPointer));
    printf("value held at myPointer = %f.\n", *myPointer);

    return 0;
}
