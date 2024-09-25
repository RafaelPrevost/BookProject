#include <iostream>
#include <string>
#include <cbook.hpp>

int main(int argc, char** argv){
    std::cout << "======================== ENTER BOOK PROJECT ========================\n\n";

    CBook OnePiece("OnePiece 60", "Eiichiro Oda", "758-9", 2012, 200);
    CBook OnePiece2("OnePiece 58", "Eiichiro Oda", "758-7", 2011, 198);

    OnePiece.ShowDetailled();

    OnePiece.UpdateInfo("OnePiece 59", "Eiichiro Oda", "758-8", 2011, 210);

    OnePiece.ShowDetailled();

    if(OnePiece.CompareTitle(OnePiece2)==false){
        std::cout << "Les livres ne sont pas les memes !" << std::endl ;
    }





    std::cout << "\n======================== EXIT BOOK PROJECT =========================\n";
}
