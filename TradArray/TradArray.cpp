#include "pch.h"

using namespace System;

void func(int arr[], size_t size)
{
    Console::WriteLine("Size in func: {0}", sizeof(arr));
    for (size_t i = 0; i < size; i++)
    {
        Console::WriteLine(arr[i]);
    }
}

const size_t SIZE = 10;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Traditional Arrays");

    // Create an array
    int arr[SIZE];
    Console::WriteLine("size in main: {0}", sizeof(arr));

    // Fill the array
    for (size_t i = 0; i < SIZE; i++)
        arr[i] = i * 2;

    // Print its contents
    for (size_t j = 0; j < 10; j++)
    {
        Console::WriteLine(arr[j]);
    }

    func(arr, sizeof(arr) / sizeof(arr[0])); // 10);
    return 0;
}
