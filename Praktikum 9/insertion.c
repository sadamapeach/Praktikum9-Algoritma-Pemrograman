/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Deskripsi   : Membuat insertion sort dengan panjang array bebas
*/

#include <stdio.h>

int main()
{
    // Kamus Lokal
    int N, array[100], i, j, tmp;

    // Algoritma
    printf("Masukkan banyak data: ");
    scanf("%d", &N);

    printf("Masukkan %d angka integer :)\n", N);

    for(i=0; i<N; i++){
        scanf("%d", &array[i]);
    }

    for(i=1; i<=N; i++){
        j=i;
        while(j>0 && array[j-1] > array[j]){
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;

            j--;
        }
    }

    printf("Hasil pengurutan: ");
    for(i=0; i<=N-1; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
