#include "client.h"

int main(){
    bool isRunning = true;
    int choice;
    pthread_t clientThread;
    string bookTitle;

    while(isRunning){
        ShowMenu();
        choice = GetUserInput();
        switch(choice){
            case 0:
                isRunning = false;
                cout << "Program ended. Please, wait..." << endl;
                break;

            case 1:
                bookTitle = GetTitle();
        }
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

/**
 * @brief Get title from input.
 * 
 * @return string Server-ready string
 */
string GetTitle(){
    string rawInput, formattedInput;
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, rawInput);
    formattedInput = StringFormatter(rawInput);
    return formattedInput;
}

/**
 * @brief Format inputted string (replacing withespaces to underscores).
 * 
 * @param rawString non-formatted string
 * @return string formatted and validated string
 */
string StringFormatter(string rawString){
    //TODO: replace withespaces with underscores. Useful for client-server communication
}


