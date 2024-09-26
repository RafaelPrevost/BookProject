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
    CBook** m_book;
    size_t  m_capacite;
    size_t  m_size;
    
public:
    CLibrary();
    ~CLibrary();
};




