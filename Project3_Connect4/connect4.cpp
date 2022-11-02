//**************************************************************
//*** Title: Connect4
//*** Course: CPET-121
//*** Developer: Kyle Scher
//*** Date: 10/31/22
//*** Description: Connect4 the game
//**************************************************************

//This project is done, still has a few bugs

#include <iostream>
#include <iomanip>
#include <vector>

bool userInput(int userTurn, int board[][7], int *R, int *C); //User Input Function

bool winFunc(int board[][7], bool win); //Win checks

int startFunc(int userTurn); //initialize the game

int displayFunc(int board[][7]); //Displays the current board...Stores no data

bool tieFunc(int board[][7]); //Checks for tie game


int   main(){
    int board[6][7]; //Main board
    int userClm = 0, userTurn = 1, C,R, playerWin, user1W = 0, user2W = 0, tieCount = 0; //user12W are to track wins, userClm is for inputs
    bool validMove = true, winCheck = false, tieCheck = false;
    std::string nextGame;

    while(nextGame != "N"){ //Quits the main game loop if 
    
        for(int i = 0; i < 6; i++){ //Clears Board
            for(int j = 0; j < 7; j ++){
                board[i][j] = 0;
            }
        }

        userTurn = startFunc(userTurn); //Game Starts
    
        while(!winCheck){ //Main logic

            validMove = userInput(userTurn, board, &R, &C); //Checks valid move
            if(validMove == true){
                if(userTurn == 1){
                    board[R][C] = 1;
                    userTurn = 2;
                    playerWin = 1;
                }
                else{
                    board[R][C] = 2;
                    userTurn = 1;
                    playerWin = 2;
                }
                
                //Resets indicator values 
                R = 0; 
                C = 0;

                winCheck = winFunc(board, winCheck); //Checks for win
                if(winCheck){
                    user1W++;
                    break;
                }
                else{
                    displayFunc(board);//Output board
                }
            }
            else{
                std::cout << " \n\n\nInvalid move column is full, you have lost you turn!\n" << std::endl; //Invalid moves
                if(userTurn == 1){
                    userTurn = 2;
                    playerWin = 1;
                }
                else{
                    userTurn = 1;
                    playerWin = 2;
                }
            }

            tieCheck = tieFunc(board); //Checks for tie game
            if(tieCheck){
                tieCount += 1;
                std::cout <<"Tie game! \nThere have been " << tieCount << " tie(s)!";
                std::cout << "\nStatistics: \n";
                std::cout <<"Player #1 Wins :" << user1W;
                std::cout <<"\nPlayer #2 Wins :" << user2W;
                goto endGame;//Gos to the end situatuion 
            }
            else{
                continue;
            }
        }

        if(winCheck){
            //Output for win situation  
            displayFunc(board); 
            std::cout <<"-----------------------------" << std::endl;
            std::cout << "Player #" << playerWin << " has won! \n";
            std::cout << "Statistics: \n";
            std::cout <<"Player #1 Wins :" << user1W;
            std::cout <<"\nPlayer #2 Wins :" << user2W;
            std::cout << "\nThere have been " << tieCount << " tie(s)!";
            endGame:
            std::cout <<"\n-----------------------------" << std::endl;
            std::cout <<"Would you like to continue? [Y/N] :";
            std::cin >> nextGame;
        }
        

        //Game loop
        if(nextGame == "N"){
            std::cout << "Exiting program....";
            break;
        }
        else{
            std::cout << "\n\n\n\n";
            winCheck = false;
            continue;
        }
    }
    return (0);
}

bool tieFunc(int board[][7]){
    int tie = 0;
 
    for(int i = 0; i < 6; i++){ //Checks for tie game!
        for(int j = 0; j < 7; j++){
            if(board[i][j] != 0){
                tie += 1;
                if(tie >= 42 ){
                    return true;
                }
            }
            else{
                tie = 0;
            }
        }
    }

    return false;
}

bool userInput(int userTurn, int board[][7], int *R, int *C){ // User Input function
    int userClm;//Selected user column
    int count;
    int tie = 0;
    //This function outputs the current board, it does not store any data
    
    do{
        std::cout << "Player #" << userTurn <<"'s Turn ("; 
        if(userTurn == 1){
            std::cout << "X";
        }
        else{
            std::cout <<  "O";
        } 
        std::cout << ")  :  Enter Your Move  :";

        
        std::cin >> userClm;
        if(userClm > 0 && userClm <= 7){ 
            for(int i = 0; i < 7; i++){ //Returns modifed Columns and Row 
                if(board[i][userClm - 1] == 0 ){
                    *R = i;
                    *C = userClm - 1;
                    return true;
                }
                if(i >= 5){
                    return false;
                }
            }
        }
        else if(userClm = 0){
            std::cout << " \n\n Invalid move please try again \n" << std::endl;
            continue;
        }
        else{
            std::cout << " \n\n Invalid move please try again \n" << std::endl;
            continue;
        }

    }while(userClm);


}

bool winFunc(int board[][7], bool win){ // Win Check
    int count = 0;
    int curP; // Current Piece

    //Horizontal Win Check
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){ 
            if(board[i][j] != 0){
                count += 1;
                for(int k = 1; k < 5; k++){
                    curP = board[i][j];
                    if(board[i][j + k] == curP){
                        count += 1;
                        if(count == 4){
                            return true;
                        }
                    }
                    else {
                        count = 0;
                        break;
                    }
                }
            }
            else{
                count = 0;
            }
        }
    }

    //Vertial Win Check
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){ 
            if(board[i][j] != 0){
                count += 1;
                for(int k = 1; k < 4; k++){
                    curP = board[i][j];
                    if(board[i + k][j] == curP){
                        count += 1;
                        if(count == 4){
                            return true;
                        }
                    }
                    else {
                        count = 0;
                        break;
                    }
                }
            }
            else{
                count = 0;
            }
        }
    }

    //Diagonal Win Check
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){ 
            if(board[i][j] != 0){
                count += 1;
                for(int k = 1; k < 4; k++){
                    curP = board[i][j];
                    if(board[i + k][k + j] == curP){
                        count += 1;
                        if(count == 4){
                            return true;
                        }
                    }
                    else {
                        count = 0;
                        break;
                    }
                }
            }
            else{
                count = 0;
            }
        }
    }

    //Backwards Diagonal Win Check
    for(int i = 6; i >= 0; i--){
        for(int j = 0; j <= 3; j++){ 
            if(board[i][j] != 0){
                count += 1;
                for(int k = 1; k < 4; k++){
                    curP = board[i][j];
                    if(board[i - k][k + j] == curP){
                        count += 1;
                        if(count == 4){
                            return true;
                        }
                    }
                    else {
                        count = 0;
                        break;
                    }
                } 
            }
            else{
                count = 0;
            }
        }
    }
    return(win);
}

int startFunc(int userTurn){ //Starts the prompt and randomizes the first turn
    userTurn = std::rand() %  2 + 1;
    std::cout << "         Welcome to Connect4!" << std::endl << "The goal is to have 4 X's or O's in a row!" << std::endl;
    std::cout << "   Player: " << userTurn << " was selected to go first " << std::endl;
    std::cout << "\n\n     Please enter your first move: \n";

    return (userTurn);
}

int displayFunc(int board[][7]){ //Called multiple times to display the current board...Stores nothing
    std::cout <<"\n\n\n\n-----------------------------" << std::endl;
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
    std::cout <<"-----------------------------" << std::endl;

    return 0;
}