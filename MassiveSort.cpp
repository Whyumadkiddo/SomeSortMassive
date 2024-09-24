#include <iostream>
using namespace std;

int arr[10];

void ArrFull() {
    
    cout << "Введите 10 чисел\n";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

}

void arrayOutput() {
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

class ChoiseSort {
public:
    void ViborSort() {
        
        for (int i = 0;i < 9;i++) {
            int minNum = i;
            for (int j = i + 1; j < 10;j++) {
                if (arr[j] < arr[minNum]) {
                    minNum = j;
                }
            }
            swap(arr[minNum], arr[i]);
        }
        arrayOutput();
    }

};

class InPutSort {
public:
    void PutInSort() {
        for (int i = 1;i < 10;i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
        arrayOutput();
    }

};



class BubbleSort {
public:

    void arraySort() {
        for (int j = 0; j < 10; j++) {
            for (int i = 0; i < 10; i++) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        arrayOutput();
    }


};

class Choise {
public:
    void sortChoise() {
        char vibor;
        cout << "Выберите метод сортировки: \n";
        cout << "1. Пузырчатая сортировка \n";
        cout << "2. Сортировка выбора \n";
        cout << "3. Сортировка вставкой \n";

        cin >> vibor;
        
            switch (vibor) {

            case '1': {
                BubbleSort as;
                as.arraySort();
                break;
            }
            case '2': {
                ChoiseSort cs;
                cs.ViborSort();
                break;
            }
            case '3': {
                InPutSort ips;
                ips.PutInSort();
                break;
            }
            default:
                cout << "Неверный выбор\n";
                break;
            }
        
    }
};
int main() {
    setlocale(LC_ALL, "rus");

    ArrFull();

    Choise obj;
    obj.sortChoise();
}