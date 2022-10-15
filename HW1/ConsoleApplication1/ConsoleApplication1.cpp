#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");

    if (!in.is_open())
    {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }
    int size, size2;
    in >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        in >> arr[i];
    }
    in >> size2;
    int* arr1 = new int[size2];
    for (int i = 0; i < size2; i++) {
        in >> arr1[i];
    }

    out << size2 << '\n';
    out << arr1[size2-1]<<" ";
    for (int i = 0; i <= size2-2; i++) {
        out << arr1[i] << " ";
    }
    
    out << '\n';
    out << size << '\n';
    for (int i = 1; i <= size-1; i++) {
        out << arr[i] << " ";
    }
    out << arr[0];
    in.close();
    out.close();
    delete[] arr;
    delete[] arr1;
    return 0;
}