/**
 * @file clibrary.hpp
 * @author prevost
 * @brief 
 * @version 0.1
 * @date 2024-09-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string>

#include <cbook.hpp>

class CLibrary{
private:
    CBook** m_books;
    size_t  m_capacite;
    size_t  m_size;

public:
    CLibrary();
    CLibrary(size_t capacity);
    ~CLibrary();

    void DisplayBooks() const;
    size_t GetBookCount() const; 
    void addBook(CBook*book);
    CBook* RemoveBook(const char* title, const char* author);
    CBook* RemoveBook(size_t index);

protected:
    void Resize();
    void CompactBooks();
};