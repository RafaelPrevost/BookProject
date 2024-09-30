/**
 * @file clibrary.cpp
 * @author prevost
 * @brief 
 * @version 0.1
 * @date 2024-09-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <clibrary.hpp>

CLibrary::CLibrary():
    m_books{nullptr},
    m_capacite{0},
    m_size{0}
{}


CLibrary::CLibrary(size_t capacity):
    m_capacite{capacity},
    m_size{0}
{
    if(capacity<0) m_capacite==0;
    m_books = new CBook*[m_capacite];
}


CLibrary::~CLibrary(){
    // std::cout << "m_size : " << m_size << " | m_capacite : " << m_capacite << std::endl;
    for (size_t index=0; index<m_size; index++){
        if(!m_books[index]){
            std::cout << "Erreur, un des pointeurs vers un livre est NULL" << std::endl;
        }
        else delete(m_books[index]);
    }
    std::cout << "Bibliotheque detruite ainsi que tout les livres contenus" << std::endl;
    delete[] m_books;
}


void CLibrary::DisplayBooks() const{
    if(m_size==0) std::cout << "La bibliotheque est vide !" << std::endl;
    else{
        std::cout << "Voici les livres contenus dans la bibliotheque :" << std::endl;
        for (size_t index=0; index<m_size; index++){
            m_books[index]->Display();
        }
    }
}


size_t CLibrary::GetBookCount() const{
    return m_size;
}


void CLibrary::addBook(CBook*book){
    if(!book){
        std::cout << "ERREUR : Le livre est NULL" << std::endl;
        return;
    }
    if(m_size==m_capacite) Resize();
    m_books[m_size]=book;
    m_size++;
    
    std::cout << "Le livre " << book->GetTitle() << " a bien ete ajoute a la bibliotheque !" << std::endl;
}


CBook* CLibrary::RemoveBook(const char* title, const char* author){
    std::cout << "Recherche d'un livre avec le titre " << title << " et l'auteur " << author << "....." << std::endl;
    CBook* bookToRemove=nullptr;
    for(size_t index=0 ;index<m_size ;index++){
        if(m_books[index]->GetTitle()==title && m_books[index]->GetAuthor()==author){
            bookToRemove=m_books[index];
            m_books[index]=nullptr;
            CompactBooks();
            break;
        }
    }
    if (bookToRemove==nullptr) std::cout << "Aucun livre n'a été trouvé" << std::endl << std::endl;
    else std::cout << "Le livre a bien été supprimé !" << std::endl << std::endl; 
    return bookToRemove;
}

CBook *CLibrary::RemoveBook(size_t index){
    CBook* bookToRemove=nullptr;
    if (index>m_size) std::cout << "Index invalide" << std::endl << std::endl;
    else{
        std::cout << "Recherche d'un livre avec l'index " << index << "....." << std::endl;
        bookToRemove=m_books[index];
        m_books[index]=nullptr;
        CompactBooks();
        std::cout << "Le livre a bien été supprimé !" << std::endl << std::endl; 
    }
    return bookToRemove;
}

void CLibrary::Resize(){
    CBook** bookInter = new CBook*[m_capacite+1];
    for(size_t index=0;index<m_size;index++){
        bookInter[index]=m_books[index];
    }
    delete[] m_books;
    m_books=bookInter;
    m_capacite++;
}


void CLibrary::CompactBooks(){
    int decalage=0;
    for(size_t index=0; index<m_size; index++){
        if(decalage>0){
            m_books[index-decalage]=m_books[index];
        }   
        if(m_books[index]==nullptr){
            decalage++;
        }
    }
    m_size-=decalage;

    for(size_t toDelete=m_size; toDelete<m_capacite; toDelete++){
        m_books[toDelete]=nullptr;
    }
}