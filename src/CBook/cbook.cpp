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

#include <cbook.hpp>

CBook::CBook():
    m_title{"Not defined"},
    m_author{"Not defined"},
    m_isbn{"Not defined"},
    m_year{0},
    m_pages{0}
{}


CBook::CBook(const char* title, const char* author, const char* isbn, int year, int pages):
    m_title{title},
    m_author{author},
    m_isbn{isbn},
    m_year{year},
    m_pages{pages}
{
    printf("Le livre %s a bien ete cree\n",title);
}


CBook::~CBook(){
    printf("Objet detruit\n");
}


void CBook::Show() const{
    std::cout << "Title: [" << m_title << "]" << std::endl
              << "Author: [" << m_author << "]" << std::endl
              << "Year: [" << m_year << "]" << std::endl <<  std::endl;
}


void CBook::ShowDetailled() const{
    std::cout << "Title: [" << m_title << "]" << std::endl
              << "Author: [" << m_author << "]" << std::endl
              << "ISBN: [" << m_isbn << "]" << std::endl
              << "Year: [" << m_year << "]" << std::endl
              << "Pages: [" << m_pages << "]" << std::endl << std::endl;
}


void CBook::UpdateInfo(const std::string& newTitle, const std::string& newAuthor, const std::string& newISBN, int newYear, int newPages){
    m_title=newTitle;
    m_author=newAuthor;
    m_isbn=newISBN;
    m_year=newYear;
    m_pages=newPages;
    std::cout << "L'objet a bien ete mis a jour\n\n";
}


void CBook::SetTitle(const std::string& title){
    m_title=title;
    std::cout << "Le titre a bien ete mis a jour\n";
}


void CBook::SetAuthor(const std::string& author){
    m_author=author;
    std::cout << "L'auteur a bien ete mis a jour\n";
}


void CBook::SetISBN(const std::string& isbn){
    m_isbn=isbn;
    std::cout << "L'ISBN a bien ete mis a jour\n";
}


void CBook::SetYear(int year){
    m_year=year;
    std::cout << "L'Annee a bien ete mis a jour\n";
}


void CBook::SetPages(int pages){
    m_pages=pages;
    std::cout << "Le nombre de pages a bien ete mis a jour\n";
}


std::string CBook::GetTitle() const{
    return m_title;
}


std::string CBook::GetAuthor() const{
    return m_author;
}


std::string CBook::GetISBN() const{
    return m_isbn;
}


int CBook::GetYear() const{
    return m_year;
}


int CBook::GetPages() const{
    return m_pages;
}


bool CBook::CompareTitle(const CBook &other) const{
    if(m_title==other.m_title) return true;
    else return false;
}


bool CBook::CompareAuthor(const CBook& other) const{
    if(m_author==other.m_author) return true;
    else return false;
}


bool CBook::CompareISBN(const CBook& other) const{
    if(m_isbn==other.m_isbn) return true;
    else return false;
}


bool CBook::CompareYear(const CBook& other) const{
    if(m_year==other.m_year) return true;
    else return false;
}


bool CBook::ComparePages(const CBook& other) const{
    if(m_pages==other.m_pages) return true;
    else return false;
}
