#ifndef LIBQMALLOC_LIBRARY_H
#define LIBQMALLOC_LIBRARY_H

#include <stddef.h>

typedef void(*__qmalloc_callback_t)(void);

void qmalloc_register_callback(__qmalloc_callback_t callback);

void* qmalloc(size_t size);

#endif //LIBQMALLOC_LIBRARY_H
