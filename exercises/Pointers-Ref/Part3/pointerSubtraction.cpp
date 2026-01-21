#include  <iostream>


int main()
{
    int arr[] = {1, 2, 4, 5};
    int* start = &arr[0];
    int* end = &arr[4];

    std::cout << end - start << std::endl;

    return 0;
}