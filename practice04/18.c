#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[10] = {1, 100, 33, 5, 8, 67, 90, 11, 54, 10};  
    bool flag = false;
    bool end = false;
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    while (!end) {
        flag = false;
        for (int i = 0; i < arrLen; i++) {  
            if (i == 0) continue;
            if (arr[i - 1] > arr[i]) {      
                int l = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = l;
                flag = true;
            }
        }
        end = !flag;
    }

    for (int i = 0; i < arrLen; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}