#include <iostream>
#include <iomanip>
#include <vector>

int userMove(int userInput);
int * boardFunc(int *userClm, int board);
bool winCheck(int board);


int main(){
    int playerTurn = 0;
    bool gameWin = false;
    int userInput, userClm, board;
    int board[6][7];

    //Randomize playerTurn

    do{

        //ADD Change Player Turn

        if(playerTurn = 1){
            int userClm = userMove(userInput);

            boardFunc(&userClm, &board);

            winCheck(board);
        }
        else if(playerTurn = 0){

        }

    }while(gameWin != true);

}


int userMove(int userInput){
    int userClm;
    
	std::cin >> userInput;
    userClm = userInput;
    return (userClm);	
}


int * boardFunc(int *userClm, int *board){
    int clm = *userClm;

    for(int i = 0; i < 6; i++){
        if(board[clm][i] != 0){
            //Place Piece at lowest spot
            //Break
        }
        else {
            //Invalid Input 
        }
        
        
    }
	return(board);
}
bool winCheck(int board){

}

