#include <iostream>
#include <string>
#include <clibrary.hpp>

int main(int argc, char** argv){
    std::cout << "======================== ENTER BOOK PROJECT ========================\n\n";

    CBook* OnePiece = new CBook("OnePiece 1", "Eiichiro Oda", "758-9", 2012, 200);
    CBook* OnePiece2 = new CBook("OnePiece 2", "Eiichiro Oda", "758-7", 2011, 198);
    CLibrary library_op;

    library_op.addBook(OnePiece);
    library_op.addBook(OnePiece2);

    library_op.DisplayBooks();

    OnePiece = library_op.RemoveBook("OnePiece 1", "Eiichiro Oda");

    library_op.DisplayBooks();


    std::cout << "\n======================== EXIT BOOK PROJECT =========================\n";
}
