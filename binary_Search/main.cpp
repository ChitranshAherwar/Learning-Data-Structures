#include <iostream>

int binarySearch(int array[], int target)
{
    int left = 0, right = 6;
    while (left <= right)
    {
        int mid = left + (right - left) /2;

        if (array[mid] == target){
            return mid;
        } else if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int result = binarySearch(arr, 9);
    std::cout << "Result: " << result;

}