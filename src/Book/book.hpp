/**
 * @file book.hpp
 * @author prevost
 * @brief 
 * @version 0.1
 * @date 2024-09-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string>

class Book{
private:
    std::string m_title;
    std::string m_author;
    std::string m_isbn;
    int         m_year;
    int         m_pages;
public:
    Book();
    Book(const char* title, const char* author, const char* isbn, int year, int pages);
    ~Book();

    void Show() const;
    void ShowDetailled() const;
    void UpdateInfo(const std::string& newTitle, const std::string& newAuthor, const std::string& newISBN, int newYear, int newPages);
    void SetTitle(const std::string& title);
    void SetAuthor(const std::string& author);
    void SetISBN(const std::string& isbn);
    void SetYear(int year);
    void SetPages(int pages);

    std::string GetTitle() const;
    std::string GetAuthor() const;
    std::string GetISBN() const;
    int GetYear() const;
    int GetPages() const;

    bool CompareTitle(const Book& other) const;
    bool CompareAuthor(const Book& other) const;
    bool CompareISBN(const Book& other) const;
    bool CompareYear(const Book& other) const;
    bool ComparePages(const Book& other) const;
};


