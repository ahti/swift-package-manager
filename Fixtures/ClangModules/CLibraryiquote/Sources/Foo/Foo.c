#include "include/Foo/Foo.h"

int foo() {
    int a = 5;
    int b = a;
    a = b;
    return a;
}
