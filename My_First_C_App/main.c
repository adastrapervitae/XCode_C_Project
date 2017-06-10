//
//  main.c
//  This is my test project to learn C on the mac
//
//  Created by Roman Romanov on 09.06.17.
//  Copyright © 2017 Drew My Screen. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdarg.h>



int main(int argc, const char * argv[]) {
    // insert code here...
    //char * name = "Роман";
    int age = 33;
    printf("%s самый лучший %s!\n","Роман","Программист");
    printf("Мой возраст %d лет.\n", age);
    
    printf("pi = %f\n", 4 * atan(1.0));
    printf("pi = %.2f\n", 4 * atan(1.0));
    printf("pi = %.10f\n", 4 * atan(1.0));
    printf("Арктангенс 1 = %f\n", atan(1.0));
    
    /*
    char *newfmt(const char *fmt, ...)
    {
        char *p;
        va_list ap;
        if ((p = malloc(128)) == NULL)
            return (NULL);
        va_start(ap, fmt);
        (void) vsnprintf(p, 128, fmt, ap);
        va_end(ap);
        return (p);
    }
    */
    
    return 0;
}
