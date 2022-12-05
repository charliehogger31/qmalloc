#include "qmalloc.h"

#include <stdlib.h>

__qmalloc_callback_t call = NULL;

void qmalloc_register_callback(__qmalloc_callback_t callback) {
    call = callback;
}

void* qmalloc(size_t size) {
    void* result = malloc(size);

    if (result == NULL) {
        call();
        return NULL;
    }

    return result;
}