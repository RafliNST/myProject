#include <iostream>

void sortInt(int array[], int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int findRange(int array[], int size){
    return array[size] - array[0];
}

int main(int argc, char const *argv[])
{
    int listNumber[] = {
        12, 14, 10, 11, 9, -1, -4, 0, 5, 7, 100,
        35, 40, 41, -10, -12
    },
        size = (sizeof(listNumber)/sizeof(int))-1;

    std::cout << "Array sebelum diurutkan: " << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << listNumber[i] << " ";
    std::cout << std::endl;
    // mengurutkan array
    sortInt(listNumber, size);

    std::cout << "Array setelah diurutkan: " << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << listNumber[i] << " ";
    std::cout << std::endl;

    std::cout << "Range array: " << findRange(listNumber, size) << std::endl;
    
    return 0;
}
