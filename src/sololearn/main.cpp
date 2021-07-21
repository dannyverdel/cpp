#include <iostream>
#include <cstdlib>
#include <ctime>

int add(int x, int y);
void memory_challenge();
void bus_challenge();
void random_number();
int factorial(int n);
void print_arr(int arr[]);
bool pal(int x);

int main()
{
    std::cout << "Hello World!" << std::endl;

    std::cout << pal(666) << std::endl;

    int array[] = {18, 19, 20};
    std::cout << sizeof(array) / sizeof(array[0]) << std::endl; // get the size of an array
    print_arr(array);

    std::cout << add(5, 5) << std::endl;

    std::cout << "-----------------" << std::endl;

    std::cout << factorial(4) << std::endl;

    std::cout << "-----------------" << std::endl;

    random_number();

    std::cout << "-----------------" << std::endl;

    int a, b, temp;

    std::cout << "Enter a number: ";
    std::cin >> a;

    std::cout << "Enter a number: ";
    std::cin >> b;

    std::cout << "A is now " << a << std::endl;
    std::cout << "B is now " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "A is now " << a << std::endl;
    std::cout << "B is now " << b << std::endl;

    a = 3;
    b = 2;
    b = a++;
    std::cout << ++b << std::endl;

    int x = 5;
    int *p = &x;

    x = x + 4;
    x = *p + 4;
    *p = *p + 4;

    std::cout << "The value of pointer p is " << *p << std::endl;
    std::cout << "The address of pointer p is " << p << std::endl;

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

void memory_challenge()
{
    /*
    The code provided calculates the largest element of the array nums and outputs it.
    Complete the code to declare the nums array and take the array elements as input.
    The array can be of any variable size, so the first input should be the size of the array, followed by its elements.
    */

    int n, x;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int *nums; // allocate memory
    nums = new int[n];

    for (x = 0; x < n; x++)
    {
        std::cout << "Enter a value: ";
        std::cin >> nums[x]; //take input for every element in the array
    }

    int max = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
            max = nums[i];
    }
    std::cout << max << std::endl;
}

void bus_challenge()
{
    /*
    You are making a program for a bus service. 
    A bus can transport 50 passengers at once. 
    Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.

    Sample Input:
    126

    Sample Output: 
    24
    */

    int passengers, waiting;

    std::cout << "How many passengers are waiting: ";
    std::cin >> passengers;

    waiting = 50 - (passengers % 50);

    if (waiting != 50)
        std::cout << waiting << std::endl;
    else
        std::cout << 0 << std::endl;
}

void random_number()
{
    srand(time(0));
    int x;
    for (x = 0; x < 10; x++)
        std::cout << 1 + (rand() % 6) << std::endl;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void print_arr(int arr[])
{
    int size, x;
    size = sizeof(&arr) / sizeof(arr[0]);

    for (x = 0; x < size; x++)
        std::cout << arr[x] << std::endl;
}

bool pal(int x)
{
    int n, r, sum = 0, temp;
    std::cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        std::cout << temp << " is a palindrome";
    else
        std::cout << temp << " is NOT a palindrome";
    return 0;
}