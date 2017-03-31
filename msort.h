#ifndef MSORT_H_INCLUDED
#define MSORT_H_INCLUDED

void swap(const void* a, const void* b, int size);
void Qsort(void* base, int left, int right, int size, int (*cmp)(const void* a, const void* b));
int cmp_string(const void* a, const void* b);
int cmp_int(const void* a, const void* b);
int cmp_double(const void* a, const void* b);

#endif // MSORT_H_INCLUDED
