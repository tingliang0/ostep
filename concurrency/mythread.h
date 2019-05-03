#ifndef __MYTHREAD__
#define __MYTHREAD__

#include <pthread.h>
#include <assert.h>

void Pthread_mutex_lock(pthread_mutex_t *mutex) {
    int rc = pthread_mutex_lock(mutex);
    assert(rc == 0);
}

#endif // __MYTHREAD__
