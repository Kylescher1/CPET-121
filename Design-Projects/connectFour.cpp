#include <iostream>
#include <iomanip>
#include <vector>

bool userInput(int userTurn, int board[][7], int *R, int *C){
    int userClm;
    std::cin >> userClm;
    
    if(userClm > 0 && userClm <= 7){
        for(int i = 0; i < 7; i++){
            if(board[i][userClm - 1] == 0 ){
                *R = i;
                *C = userClm - 1;
                return true;
            }
        }
    }
    else{
         return (false);
    }
  

    //Checks the location
    //Edits *C and *R 
}

bool winFunc(int board[][7], bool win){

    return(win);
}


int main(){
    int board[6][7];
    int userClm = 0;
    int userTurn = 1;
    int C,R;
    bool validMove = true;
    bool winCheck = false;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j ++){
            board[i - 1][j] = 0;
        }
    }
    
    do {
        if(userTurn == 1){
            validMove = userInput(userTurn, board, &R, &C);
            if(validMove == true){
                board[R][C] = 1;
                userTurn = 2;
            }
            else{
                std::cout << "Invalid Move" << std::endl;
            }
        }
        else if(userTurn == 2){
            validMove = userInput(userTurn, board, &R, &C);
            if(validMove == true){
                board[R][C] = 2;
                userTurn = 1;
            }
            else{
                std::cout << "Invalid Move" << std::endl;
            }

        }


        if(validMove){
            std::cout << "  1   2   3   4   5   6   7 " << std::endl;
            std::cout <<"-----------------------------" << std::endl;
            for(int i = 5; i >= 0; i--){
                for(int j = 0; j < 7; j ++){
                    std::cout <<"| "; 
                    if(board[i][j] == 1){
                        std::cout << "X";
                    }
                    else if (board[i][j] == 2){
                        std::cout << "O";
                    }
                    else {
                        std::cout << " ";
                    }
                    std::cout << " ";
                }
                std::cout << "|" << std::endl;
            }

        }
        else{
            continue;
        }

        winCheck = winFunc(board, winCheck);


    } while(!winCheck);





}