#include <iostream>

// Fungsi untuk menggabungkan dua larik terurut
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::cout << "N1 : " << n1 << " N2 : " << n2 << std::endl;

    // Buat larik-larik sementara untuk penyimpanan sementara
    int leftArr[n1];
    int rightArr[n2];

    // Salin data ke larik sementara leftArr[] dan rightArr[]
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Gabungkan larik-larik sementara menjadi satu larik terurut
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Salin elemen yang tersisa dari leftArr[], jika ada
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Salin elemen yang tersisa dari rightArr[], jika ada
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Fungsi utama untuk melakukan pengurutan Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Temukan titik tengah
        int mid = left + (right - left) / 2;

        // Rekursif untuk mengurutkan bagian kiri dan kanan
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan bagian yang sudah terurut 
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {1, -110, 10, -110};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Larik sebelum diurutkan: ";
    for (int i = 0; i < arrSize; i++)
        std::cout << arr[i] << " ";

    mergeSort(arr, 0, arrSize - 1);

    std::cout << "\nLarik setelah diurutkan: ";
    for (int i = 0; i < arrSize; i++)
        std::cout << arr[i] << " ";

    return 0;
}
