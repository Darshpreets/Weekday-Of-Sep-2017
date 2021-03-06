#include <iostream>

void sortNum(int& num1, int& num2, int& num3);

int main()
{
    int firstNum, secondNum, thirdNum;
    std::cout << "Enter first number: ";
    std::cin >> firstNum;
    std::cout << "Enter second number: ";
    std::cin >> secondNum;
    std::cout << "Enter third number: ";
    std::cin >> thirdNum;

    //call the function that you will define
    sortNum(firstNum, secondNum, thirdNum);
    //once this function returns, you should see the arguments you passed
    //in have been reassigned in such a way that they are in ascending
    //order, based on how you passed them in

    std::cout << "Numbers in order: " << firstNum << ' ' << secondNum << ' ' << thirdNum << '\n';
}

void sortNum(int& num1, int& num2, int& num3)
{
    //at the very beginning of this function, num1 num2 and num3 hold
    //the values they were given at the time the function was called

    //If the first number is bigger than the second, then they're not in
    //ascending order. Swap them.
    if(num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    //do more swapping down here as appropriate to arrange the numbers
    //...more code...etc...

    //at the end, the numbers have been rearranged into ascending order.
    //Since the numbers were passed by reference, the changes you make
    //here will be seen by whoever called the function (in this case, main).
}