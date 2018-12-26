#include <iostream>
#include <stdlib.h>

int main(){
  
  //Long live and prosper
  srand (time(NULL));
  int computer = rand() % 4;
  
  int user = 0;
  
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  
  std::cout << "shoot! ";
  std::cin >> user;
  
    /* this part of the code
     outputs what the user chose as his
     emoji. */
  if(user == 1)
    std::cout << "you chose : ✊\n";
  else if(user == 2)
    std::cout << "you chose : ✋\n";
  else 
    std::cout << "you chose : ✌️\n";
  
  if(computer == 1)
    std::cout << "cpu chose : ✊\n";
  else if(computer == 2)
    std::cout << "cpu chose : ✋\n";
  else
    std::cout << "cpu chose : ✌️\n";
  
    //this part of the code shows if the user chose the same random emoji as the computer
    //it is a tie
    
  if (user == computer)
    std::cout << "it's a tie!\n";
  
  //user rock
  //this part of the code shows if the player would win or not
    
  else if (user == 1){
    if (computer == 2)
    {
      std::cout << "you lost! booooo!\n";
    }
    if (computer == 3)
    {
      std::cout << "you won! woohoo!\n";
    }
  }
  
  else if(user == 2){
    
    if(computer == 1){
      std::cout << "you won! woohoo!\n";
    }
    if (computer == 3){
      std::cout << "you lost! boooo!\n";
    }
  }
  
   // user scissors
  
  else if (user == 3) {
    
    if (computer == 1) {
      
      std::cout << "you lose! woohoo!\n";
      
    }
    if (computer == 2) {
      
      std::cout << "you won! booooo!\n";
      
    }
    
  }
}
