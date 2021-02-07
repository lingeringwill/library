#pragma once

#include "Book.h"
#include <vector>
class Inventory
{
 public:
   std::vector <Book> Books;

  void AddBook (Book book);
  void RemoveBook (Book book);
  Book FindBookByTitle(std::string title);
  void CheckOutBook(Book book);
  void CheckInBook(Book book);
  
};