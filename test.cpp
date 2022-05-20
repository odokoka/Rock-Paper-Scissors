/**
 * test.cpp
 * Project UID 24b93ce4a6274610f4c3f3e31fe17277t
 *
 * Ojochilemi Okoka
 * okokaojo
 *
 * EECS 183: Project 2
 * Winter 2022
 *
 * Testing functions for your rps.cpp implementation.
 * Holds the definitions of required testing functions.
 * We have stubbed all required functions for you.
 */

#include <iostream>
#include <string>

using namespace std;


//************************************************************************
// You should have implemented the following functions in rps.cpp
//************************************************************************
string getName(int playerNumber);
int getMenuChoice();
bool isMoveGood(char move);
char getMove(string playerName);
bool isRoundWinner(char move, char opponentMove);
void announceRoundWinner(string winnerName);
int doRound(string p1Name, string p2Name);
void announceWinner(string winnerName);
string doGame(string p1Name, string p2Name, int gameType);

//************************************************************************
// The following functions were already implemented for you in rps.cpp
//************************************************************************
void printInitialHeader();
void printMenu();
void printErrorMessage(int errorNumber);
void printCloser();

//************************************************************************
// Testing function declarations. Function definition is below main.
//************************************************************************
void test_isMoveGood();
void test_isRoundWinner();
void test_announceRoundWinner();
void test_announceWinner();


void startTests() {
    cout << "\nExecuting your test cases\n";
    
    test_isMoveGood();
    test_isRoundWinner();
    test_announceRoundWinner();
    test_announceWinner();
    
    return;
}

//************************************************************************
// Put all your test function implementations below here.
// We have stubbed all required functions for you
// to recieve full points when submitting test.cpp
// NOTE: We will only grade your tests for the following functions
//       * isMoveGood
//       * isRoundWinner
//       * announceRoundWinner()
//       * announceWinner()
//************************************************************************

void test_isMoveGood() {
    cout << "Now testing function isMoveGood()\n";
    cout << "'r': Expected: 1, Actual: " << isMoveGood('r') << endl;
    cout << "'q': Expected: 0, Actual: " << isMoveGood('q') << endl;
    //Student made test cases below
    cout << "'S': Expected: 1, Actual: " << isMoveGood('S') << endl;
    cout << "'P': Expected: 1, Actual: " << isMoveGood('P') << endl;
    cout << "'3': Expected: 0, Actual: " << isMoveGood('3') << endl;
    cout << "'n': Expected: 0, Actual: " << isMoveGood('n') << endl;

    return;
}
void test_isRoundWinner() {
    //Student made test cases below
    
    cout << "Now testing function isRoundWinner()\n";
    cout << "'r' and 'p': Expected 0, Actual: " << isRoundWinner('r', 'p');
    cout << endl;
    cout << "'p' and 'p': Expected 0, Actual: " << isRoundWinner('p', 'p');
    cout << endl;
    cout << "'S' and 'p': Expected 1, Actual: " << isRoundWinner('S', 'p');
    cout << endl;
    cout << "'s' and 'R': Expected 0, Actual: " << isRoundWinner('s', 'R');
    cout << endl;
    
    return;
}

void test_announceRoundWinner() {
    //Student made test cases below
    
    cout << "Now testing function announceRoundWinner()" << endl;
    cout << "'': Expected 'This Round is a draw', Actual: " << endl;
    announceRoundWinner("");
    cout << endl;
    
    cout << "'Ronnie Mack': Expected 'Ronnie Mack wins the round', Actual: "
    << endl;
    announceRoundWinner("Ronnie Mack");
    cout << endl;
    
    return;
}

void test_announceWinner() {
    //Student made test cases below
    
    cout << "Now testing function announceWinner()" << endl;
    cout << "'': Expected 'No Winner!', Actual: " << endl;
    announceWinner("");
    cout << endl;
    
    cout << "'Ronnie Mack': Expected 'Congratulations Ronnie Mack...', Actual: "
    << endl;
    announceWinner("Ronnie Mack");
    cout << endl;

    return;
}
