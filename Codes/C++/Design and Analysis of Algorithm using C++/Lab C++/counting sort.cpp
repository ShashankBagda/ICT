#include <iostream>
#include <vector>

void countingSort(int arr[], int size) 
{
    // Find the maximum element in the array
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }

    // Create a counting array to store frequency of each element
    std::vector<int> count(maxElement + 1, 0);
    for (int i = 0; i < size; i++) 
    {
        count[arr[i]]++;
    }

    // Modify the counting array to store the cumulative count
    for (int i = 1; i <= maxElement; i++) 
    {
        count[i] += count[i - 1];
    }

    // Create an output array and populate it using the counting array
    int output[size];
    for (int i = size - 1; i >= 0; i--) 
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < size; i++) 
    {
        arr[i] = output[i];
    }
}

int main() 
{
    int arr[] = {5,6,2,5,8,8,9,5,4,2,3,5,6,5,5,2,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    countingSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}