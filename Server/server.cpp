#include "server.h"

int main(){
    bool isRunning = true;

    if(!ServerSetup()){
        perror("SETUP");
        exit(EXIT_FAILURE);
    }



    return 0;
}

/**
 * @brief Server setup: check archive.
 * 
 * @return true if setup succeded.
 * @return false 
 */
bool ServerSetup(){
    bool setupResult = false;
    ifstream books(BOOKS);
    if(books.is_open()){
        // books.txt already exists
        books.close();
        setupResult = true;
    }else{
        // books.txt doesn't exist
        ofstream archive(BOOKS);
        if(archive.is_open()){
            // books.txt created
            archive.close();
            setupResult = true;
        }else{
            setupResult = false;
        }
    }
    return setupResult;
}