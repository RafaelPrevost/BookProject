/**
 * @file book.cpp
 * @author prevost
 * @brief 
 * @version 0.1
 * @date 2024-09-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <book.hpp>

Book::Book():
    m_title{"Not defined"},
    m_author{"Not defined"},
    m_isbn{"Not defined"},
    m_year{0},
    m_pages{0}
{}


Book::Book(const char* title, const char* author, const char* isbn, int year, int pages):
    m_title{title},
    m_author{author},
    m_isbn{isbn},
    m_year{year},
    m_pages{pages}
{
    printf("Le livre %s a bien été crée\n",title);
}


Book::~Book(){
    printf("Objet détruit\n");
}


void Book::Show() const{
    std::cout << "Title: [" << m_title << "]" << std::endl
              << "Author: [" << m_author << "]" << std::endl
              << "Year: [" << m_year << "]" << std::endl <<  std::endl;
}


void Book::ShowDetailled() const{
    std::cout << "Title: [" << m_title << "]" << std::endl
              << "Author: [" << m_author << "]" << std::endl
              << "ISBN: [" << m_isbn << "]" << std::endl
              << "Year: [" << m_year << "]" << std::endl
              << "Pages: [" << m_pages << "]" << std::endl << std::endl;
}


void Book::UpdateInfo(const std::string& newTitle, const std::string& newAuthor, const std::string& newISBN, int newYear, int newPages){
    m_title=newTitle;
    m_author=newAuthor;
    m_isbn=newISBN;
    m_year=newYear;
    m_pages=newPages;
    std::cout << "L'objet a bien été mis a jour\n\n";
}


void Book::SetTitle(const std::string& title){
    m_title=title;
    std::cout << "Le titre a bien été mis a jour\n";
}


void Book::SetAuthor(const std::string& author){
    m_author=author;
    std::cout << "L'auteur a bien été mis a jour\n";
}


void Book::SetISBN(const std::string& isbn){
    m_isbn=isbn;
    std::cout << "L'ISBN a bien été mis a jour\n";
}


void Book::SetYear(int year){
    m_year=year;
    std::cout << "L'Année a bien été mis a jour\n";
}


void Book::SetPages(int pages){
    m_pages=pages;
    std::cout << "Le nombre de pages a bien été mis a jour\n";
}


std::string Book::GetTitle() const{
    return m_title;
}


std::string Book::GetAuthor() const{
    return m_author;
}


std::string Book::GetISBN() const{
    return m_isbn;
}


int Book::GetYear() const{
    return m_year;
}


int Book::GetPages() const{
    return m_pages;
}


bool Book::CompareTitle(const Book &other) const{
    if(m_title==other.m_title) return true;
    else return false;
}


bool Book::CompareAuthor(const Book& other) const{
    if(m_author==other.m_author) return true;
    else return false;
}


bool Book::CompareISBN(const Book& other) const{
    if(m_isbn==other.m_isbn) return true;
    else return false;
}


bool Book::CompareYear(const Book& other) const{
    if(m_year==other.m_year) return true;
    else return false;
}


bool Book::ComparePages(const Book& other) const{
    if(m_pages==other.m_pages) return true;
    else return false;
}
