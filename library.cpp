#include <iostream>
#include <string>
#include "Book.h"
#include "Inventory.h"
#include "string"

using std::basic_string;

Inventory _inventory;
int main() {

  while (true) {

    std::cout << "choose an option: " << std::endl;
    std::cout << "1. add book" << std::endl;
    std::cout << "2. list all books " << std::endl;
    std::cout << "3. Check out book " << std::endl;
    std::cout << "4. Check in book " << std::endl;

    std::cout << "0. Exit";

    int input;
    std::cin >> input;
    
    switch (input)
    {
    case 0:
         std::cout<< "Thank you. goodbye" << std::endl;
         return 0;
    case 1:
        std::cout << "Title: ";

        std::string title;
        std::getline(std::cin, title);
         _inventory.AddBook();
    break;
    case 2:

    break;
    case 3:

    break;
    case 4:

    break;
        default:
        std::cout<< "invalid selection. " << std::endl;
  
    
    }
}
}