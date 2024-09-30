/**
 * @file CScenario.cpp
 * @author prevost
 * @brief 
 * @version 0.1
 * @date 2024-09-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <CScenario.hpp>

/// Classe CBook :

void scenario1(){

    CBook OnePiece("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    CBook OnePiece2("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    CBook OnePiece3("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);

    OnePiece.Display();
    OnePiece2.Display();
    OnePiece3.Display();
}

void scenario2(size_t listSize){

    CBook* BiblioOnePiece[listSize];

    BiblioOnePiece[0]= new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    BiblioOnePiece[1]= new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    BiblioOnePiece[2]= new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);

    for(size_t index=0;index<listSize;index++){
        BiblioOnePiece[index]->Display();
    }
    for(size_t index=0;index<listSize;index++){
        delete BiblioOnePiece[index];
    }
}

void scenario3(size_t listSize){

    CBook OnePiece("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    CBook OnePiece2("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    CBook OnePiece3("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);

    CBook BiblioOnePiece[listSize]={OnePiece,OnePiece2,OnePiece3};

    for(size_t index=0;index<listSize;index++){
        BiblioOnePiece[index].Display();
    }
}

void scenario4(size_t listSize){

    CBook** BiblioOnePiece = new CBook*[listSize];

    BiblioOnePiece[0]= new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);;
    BiblioOnePiece[1]= new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    BiblioOnePiece[2]= new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);

    for(size_t index=0;index<listSize;index++){
        BiblioOnePiece[index]->Display();
    }
    for(size_t index=0;index<listSize;index++){
        delete BiblioOnePiece[index];
    }
    delete[] BiblioOnePiece;
}

void scenario5(size_t listSize, size_t newListSize){

    CBook** BiblioOnePiece = new CBook*[listSize];

    BiblioOnePiece[0]= new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);;
    BiblioOnePiece[1]= new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    BiblioOnePiece[2]= new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);

    for(size_t index=0;index<listSize;index++){
        BiblioOnePiece[index]->Display();
    }

    CBook** bookInter = new CBook*[newListSize];

    for(size_t index=0;index<listSize;index++){
        bookInter[index]=BiblioOnePiece[index];
    }

    delete[] BiblioOnePiece;
    BiblioOnePiece=bookInter;

    BiblioOnePiece[3]= new CBook("OnePiece 4", "Eiichiro Oda", "758-9", 1996, 200);;
    BiblioOnePiece[4]= new CBook("OnePiece 5", "Eiichiro Oda", "759-0", 1996, 198);

    for(size_t index=0;index<newListSize;index++){
        BiblioOnePiece[index]->Display();
    }

    for(size_t index=0;index<newListSize;index++){
        delete BiblioOnePiece[index];
    }
    delete[] BiblioOnePiece;
}

/// Classe CLibrary :

void scenario6(){
    CBook* OnePiece = new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    CBook* OnePiece2 = new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    CBook* OnePiece3 = new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);
    CBook* OnePiece4 = new CBook("OnePiece 4", "Eiichiro Oda", "758-9", 1997, 203);
    CBook* OnePiece5 = new CBook("OnePiece 5", "Eiichiro Oda", "759-0", 1997, 201);
    CBook* OnePiece6 = new CBook("OnePiece 6", "Eiichiro Oda", "759-1", 1998, 201);

    CLibrary library_op;

    library_op.addBook(OnePiece);
    library_op.addBook(OnePiece2);
    library_op.addBook(OnePiece3);

    std::cout << "Le nombre d'objet contenu est : " << library_op.GetBookCount() << std::endl;

    library_op.DisplayBooks();

    library_op.addBook(OnePiece4);
    library_op.addBook(OnePiece5);
    library_op.addBook(OnePiece6);

    std::cout << "Le nombre d'objet contenu est : " << library_op.GetBookCount() << std::endl;

    library_op.DisplayBooks();
}

void scenario7(){

    CBook* OnePiece = new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    CBook* OnePiece2 = new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    CBook* OnePiece3 = new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);
    CBook* OnePiece4 = new CBook("OnePiece 4", "Eiichiro Oda", "758-9", 1997, 203);
    CBook* OnePiece5 = new CBook("OnePiece 5", "Eiichiro Oda", "759-0", 1997, 201);
    CBook* OnePiece6 = new CBook("OnePiece 6", "Eiichiro Oda", "759-1", 1998, 201);

    CLibrary library_op;

    library_op.addBook(OnePiece);
    library_op.addBook(OnePiece2);
    library_op.addBook(OnePiece3);

    std::cout << "Le nombre d'objet contenu est : " << library_op.GetBookCount() << std::endl;

    library_op.DisplayBooks();

    library_op.addBook(OnePiece4);
    library_op.addBook(OnePiece5);
    library_op.addBook(OnePiece6);

    std::cout << "Le nombre d'objet contenu est : " << library_op.GetBookCount() << std::endl;

    library_op.DisplayBooks();

    CBook* OnePieceTempo5 = library_op.RemoveBook("OnePiece 5", "Eiichiro Oda");

    library_op.DisplayBooks();

    CBook* OnePieceTempo6 = library_op.RemoveBook(library_op.GetBookCount()-1); /// Suppression du dernier index
    library_op.DisplayBooks();
    CBook* OnePieceTempo1 = library_op.RemoveBook(0);
    library_op.DisplayBooks();
    CBook* OnePieceTempo3 = library_op.RemoveBook(1);

    library_op.DisplayBooks();

    delete OnePieceTempo5;
    delete OnePieceTempo6;
    delete OnePieceTempo1;
    delete OnePieceTempo3;
}

void scenario8(){

    CBook* OnePiece = new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    CBook* OnePiece2 = new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    CBook* OnePiece3 = new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);
    CBook* OnePiece4 = new CBook("OnePiece 4", "Eiichiro Oda", "758-9", 1997, 203);
    CBook* OnePiece5 = new CBook("OnePiece 5", "Eiichiro Oda", "759-0", 1997, 201);
    CBook* OnePiece6 = new CBook("OnePiece 6", "Eiichiro Oda", "759-1", 1998, 201);

    CLibrary library_op;

    library_op.addBook(OnePiece);
    library_op.addBook(OnePiece2);
    library_op.addBook(OnePiece3);

    std::cout << "Le nombre d'objet contenu est : " << library_op.GetBookCount() << std::endl;

    library_op.DisplayBooks();

    library_op.addBook(OnePiece4);
    library_op.addBook(OnePiece5);
    library_op.addBook(OnePiece6);

    std::cout << "Le nombre d'objet contenu est : " << library_op.GetBookCount() << std::endl;

    library_op.DisplayBooks();

    CBook* OnePieceTempo5 = library_op.RemoveBook("OnePiece 5", "Eiichiro Oda");

    library_op.DisplayBooks();

    CBook* OnePieceTempo6 = library_op.RemoveBook(library_op.GetBookCount()-1); /// Suppression du dernier index
    library_op.DisplayBooks();
    CBook* OnePieceTempo1 = library_op.RemoveBook(0);
    library_op.DisplayBooks();
    CBook* OnePieceTempo3 = library_op.RemoveBook(1);

    library_op.DisplayBooks();

    library_op.addBook(OnePieceTempo1);
    library_op.addBook(OnePieceTempo6);
    library_op.addBook(OnePieceTempo3);
    library_op.addBook(OnePieceTempo5);

    library_op.DisplayBooks();
}

void scenario9(){

    CBook* OnePiece = new CBook("OnePiece 1", "Eiichiro Oda", "758-6", 1996, 200);
    CBook* OnePiece2 = new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 1996, 198);
    CBook* OnePiece3 = new CBook("OnePiece 3", "Eiichiro Oda", "758-8", 1997, 201);
    CBook* OnePiece4 = new CBook("OnePiece 4", "Eiichiro Oda", "758-9", 1997, 203);
    CBook* OnePiece5 = new CBook("OnePiece 5", "Eiichiro Oda", "759-0", 1997, 201);
    CBook* OnePiece6 = new CBook("OnePiece 6", "Eiichiro Oda", "759-1", 1998, 201);

    CLibrary* library_op = new CLibrary(0);

    library_op->addBook(OnePiece);
    library_op->addBook(OnePiece2);
    library_op->addBook(OnePiece3);

    std::cout << "Le nombre d'objet contenu est : " << library_op->GetBookCount() << std::endl;

    library_op->DisplayBooks();

    library_op->addBook(OnePiece4);
    library_op->addBook(OnePiece5);
    library_op->addBook(OnePiece6);

    std::cout << "Le nombre d'objet contenu est : " << library_op->GetBookCount() << std::endl;

    library_op->DisplayBooks();

    CBook* OnePieceTempo5 = library_op->RemoveBook("OnePiece 5", "Eiichiro Oda");

    library_op->DisplayBooks();

    CBook* OnePieceTempo6 = library_op->RemoveBook(library_op->GetBookCount()-1); /// Suppression du dernier index
    library_op->DisplayBooks();
    CBook* OnePieceTempo1 = library_op->RemoveBook(0);
    library_op->DisplayBooks();
    CBook* OnePieceTempo3 = library_op->RemoveBook(1);

    library_op->DisplayBooks();

    library_op->addBook(OnePieceTempo1);
    library_op->addBook(OnePieceTempo6);
    library_op->addBook(OnePieceTempo3);
    library_op->addBook(OnePieceTempo5);

    library_op->DisplayBooks();

    delete library_op;
}