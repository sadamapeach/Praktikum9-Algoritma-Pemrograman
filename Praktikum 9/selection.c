/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Deskripsi   : Membuat selection sort dengan panjang array bebas
*/

#include <stdio.h>

int selectionSort(int array[], int N)
{
    // Kamus Lokal
    int i, j, position, swap;

    // Algoritma
    for(i=0; i<N-1; i++){
        position = i;
        for(j=i+1; j<N; j++){
            if(array[position] > array[j]){
                position = j;
            }
        }
        if(position != i){
            swap = array[i];
            array[i] = array[position];
            array[position] = swap;
        }
    }
}

int main()
{
    // Kamus Lokal
    int N, array[100], i, j;

    // Algoritma
    printf("Masukkan banyak data: ");
    scanf("%d", &N);

    printf("Masukkan %d angka integer :)\n", N);

    for(i=0; i<N; i++){
        scanf("%d", &array[i]);
    }
    selectionSort(array, N);

    printf("Hasil pengurutan: ");
    for(i=0; i<=N-1; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
