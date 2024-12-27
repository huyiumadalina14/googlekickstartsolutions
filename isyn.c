#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int case_num = 1; case_num <= t; ++case_num) {
        int n;
        scanf("%d", &n);
        int* v = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i) {
            scanf("%d", &v[i]);
        }
        int record_days = 0;
        for (int i = 0; i < n; ++i) {
            int j;
            for (j = 0; j < i; ++j) {
                if (v[i] <= v[j]) {
                    break;
                }
            }
            if (j == i && (i == n - 1 || v[i] > v[i + 1])) {
                record_days++;
            }
        }
        printf("Case #%d: %d\n", case_num, record_days);
        free(v);
    }
    return 0;
}
