#ifndef __common_h__
#define __common_h__

#include <sys/time.h>
#include <sys/stat.h>
#include <assert.h>

/// @brief Get the current time in seconds.
/// @return The current time in seconds as a double.
double GetTime()
{
    struct timeval t;
    int rc = gettimeofday(&t, NULL);
    assert(rc == 0);
    return (double)t.tv_sec + (double)t.tv_usec / 1e6;
}

/// @brief Spin for a specified number of seconds.
/// @param howlong The number of seconds to spin.
void Spin(int howlong)
{
    double t = GetTime();
    while ((GetTime() - t) < (double)howlong)
        ; // do nothing in loop
}

#endif // __common_h__
