#include <stdio.h>

#include "app.h"

#include "helloConfig.h"

int main(void)
{
    printf("hello version: %d.%d\n", HELLO_VERSION_MAJOR, HELLO_VERSION_MINOR);
    printf("hello %d\n", my_max(1));
}