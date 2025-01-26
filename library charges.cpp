// program to calculate fines based on the number of overdue days:
/*
REG NO:BSCIT-05-0071/2024
NAME:JUSTIN MURIITHI
DATE:25/01/2025
*/
#include <iostream>

int main() {
    int overdueDays;
    double fine = 0;

    
    std::cout << "Enter the number of days the book is overdue: ";
    std::cin >> overdueDays;

    

    if (overdueDays <= 7) {
        fine = overdueDays * 20;
    } else if (overdueDays <= 14) {
        fine = (7 * 20) + ((overdueDays - 7) * 50);
    } else {
        fine = (7 * 20) + (7 * 50) + ((overdueDays - 14) * 100);
    }

    
    std::cout << "The total fine is: Ksh " << fine << std::endl;

    return 0;
}
