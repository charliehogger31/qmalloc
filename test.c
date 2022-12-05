#include "qmalloc.h"
#include <stdlib.h>

void callback() {
    exit(-1);
}

int main() {
    qmalloc_register_callback(callback);

    void* ls = qmalloc(100);

    return 0;
}