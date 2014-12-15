#include <stddef.h>
#include <wchar.h>

FILE	*fmemopen(void * __restrict, size_t, const char * __restrict);

FILE	*open_memstream(char **, size_t *);

FILE	*open_wmemstream(wchar_t **, size_t *);
