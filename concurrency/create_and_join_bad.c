#include <stdio.h>
#include <pthread.h>
#include <assert.h>
#include <stdlib.h>

typedef struct __myarg_t {
    int a;
    int b;
} myarg_t;

typedef struct __myret_t {
    int x;
    int y;
} myret_t;

void *mythread(void *arg) {
    myarg_t *args = (myarg_t *)arg;
    printf("%d %d\n", args->a, args->b);
    myret_t oops;
    oops.x = 1;
    oops.y = 2;
    return (void *)&oops;
}

int
main(int argc, char *argv[]) {
    pthread_t p;
    myarg_t args = { 10, 20};
    myret_t *rvals;
    int rc = pthread_create(&p, NULL, mythread, &args); assert(rc == 0);
    rc = pthread_join(p, (void **)&rvals); assert(rc == 0);
    printf("returned %d %d\n", rvals->x, rvals->y);
    return 0;
}
