#include "client.h"

int main(){
    bool isRunning = true;
    int choice;

    while(isRunning){
        ShowMenu();
        choice = GetUserInput();
    }

    return 0;
}

/**
 * @brief Show main menu for client-side.
 * 
 */
void ShowMenu(){
    cout << "MAIN MENU" << endl;
    cout << "1. Search book;" << endl;
    cout << "2. Rent book;" << endl;
    cout << "3. Return book;" << endl;
    cout << "4. Donate book;" << endl;
    cout << "0. Exit." << endl;
}

/**
 * @brief Get and validate user's choice.
 * 
 * @return int validated choice
 */
int GetUserInput(){
    int input;
    bool isValid = false;
    while(!isValid){
        cout << "Enter your choice: ";
        cin >> input;
        if(input >= 0 && input <= 4){
            isValid = true;
        }else{
            cout << "Invalid input. Please, try again..." << endl;
        }
    }
    return input;
}