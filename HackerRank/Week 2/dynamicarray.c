#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUERY_LEN 100

typedef struct {
    int *data;
    int size;
    int capacity;
} Sequence;

void initSequence(Sequence *seq) {
    seq->capacity = 2;
    seq->size = 0;
    seq->data = (int *)malloc(seq->capacity * sizeof(int));
}

void append(Sequence *seq, int value) {
    if (seq->size == seq->capacity) {
        seq->capacity *= 2;
        seq->data = (int *)realloc(seq->data, seq->capacity * sizeof(int));
    }
    seq->data[seq->size++] = value;
}

void dynamicArray(int n, int q, char queries[q][MAX_QUERY_LEN]) {
    Sequence *arr = (Sequence *)malloc(n * sizeof(Sequence));
    for (int i = 0; i < n; i++) {
        initSequence(&arr[i]);
    }

    int lastAnswer = 0;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        sscanf(queries[i], "%d %d %d", &type, &x, &y);

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            append(&arr[idx], y);
        } else if (type == 2) {
            int value = arr[idx].data[y % arr[idx].size];
            lastAnswer = value;
            printf("%d\n", lastAnswer); 
        }
    }

    for (int i = 0; i < n; i++) {
        free(arr[i].data);
    }
    free(arr);
}

// Example usage
int main() {
    int n = 2;
    char queries[][MAX_QUERY_LEN] = {
        "1 0 5",
        "1 1 7",
        "1 0 3",
        "2 1 0",
        "2 1 1"
    };

    int q = sizeof(queries) / sizeof(queries[0]);
    dynamicArray(n, q, queries);

    return 0;
}
#include <stdio.h>