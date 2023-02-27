// LinearSearch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//Вывод массива в консоль
template <typename T>

void print_arr(T arr[], const int lenght) {
    std::cout << '[';
    for (int i = 0; i < lenght; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b]\n";
}

//Линейный поиск первого вхолждегния элемента в массив

template<typename T>

int search_index(T arr[], const int lenght, T value, int begin = 0) { //T arr[], T value одного типа
    for (int i = begin; i < lenght; i++) 
        if (arr[i] == value)
            return i;
    return -1;
}

//Линейный поиск последнего вхождения элемента в массив
template<typename T>

int search_last_index(T arr[], const int length, T value) {
    for (int i = length - 1; i >= 0; i--)
        if (arr[i] == value)
            return i;
    return -1;
}

template<typename T>

int search_last_index(T arr[], const int length, T value, int begin) {
    for (int i = begin; i >= 0; i--)
        if (arr[i] == value)
            return i;
    return -1;
}

void subword(char word[], const int length, char sym) {
    int index = search_index(word, length, sym);
    if (index != -1) {
        for (int i = index; i < length; i++)
            std::cout << word[i];
        std::cout << std::endl;
    }
    else
        std::cout << "ERROR\n";
}



int main() //Линейный поиск
{
    setlocale(LC_ALL, "rus");
    //int n;

    //const int SIZE = 10;
    //int arr[SIZE]{ 7, 15, 105, -3, 15, 60, 8, 60, 15, -3 };
        //         0   1    2   3   4   5  6   7   8   9
    
    //std::cout << "Массив: ";
    //print_arr(arr, SIZE);

    //int index;

   // std::cout << "Введите число: ";
   // std::cin >> n;

    //index = search_index(arr, SIZE, n, 2);


    //index = search_last_index(arr, SIZE, n, 5);


   // if (index != -1)
       // std::cout << index << '\n';
   // else
       // std::cout << "Числа нет в массиве";

    

    std::cout << "Слово: ";
        
    const int word_size = 8;
    char word[word_size]{ 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };

    for (int i = 0; i < word_size; i++)
        std::cout << word[i];
    std::cout << "Введите символ: ";
    char sym;
    std::cin >> sym;
    std::cout << "Подслово: ";

    subword(word, word_size, sym);
    //std::cout<< subword


}

