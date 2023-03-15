#include <stdlib.h>
#include <stdio.h>


int Find_Minimum(int arr[], int n) {

    int bul_kucuk = arr[0];
    int m;
    for (m = 1; m < n; m++) 
    {
        if (arr[m] < bul_kucuk) 
        {
            bul_kucuk = arr[m];
        }
    }
    return bul_kucuk;
}

int main() {
    int arr[] = {3, 4, 6, 24, 34, 63};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = Find_Minimum(arr, n);

    printf("Dizinin elemanlarindan en kucugu: %d", min);

    return 0;
}
