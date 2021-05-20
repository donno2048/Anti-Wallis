#ifdef WIN32
#include <windows.h>
double get_time() {
    LARGE_INTEGER t, f;
    QueryPerformanceCounter(&t);
    QueryPerformanceFrequency(&f);
    return (double)t.QuadPart/(double)f.QuadPart;
}
#else
#include <sys/time.h>
#include <sys/resource.h>
double get_time() {
    struct timeval t;
    struct timezone tzp;
    gettimeofday(&t, &tzp);
    return t.tv_sec + t.tv_usec*1e-6;
}
#endif
double mean(double list[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += list[i];
    }
    return sum / (double) size;
}