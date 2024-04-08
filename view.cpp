#include <iostream>
#include "view.h"

using namespace std;

void ClickerView::displayPoints(int points, std::string level) {
    std::cout << "You've gained a point, Current number of points: " << points << ". Current level: " << level << std::endl;
}

void ClickerView::displayInvalidInputMessage() {
    std::cout << "Invalid input. Press 'b' to gain a point or 'e' to exit" << std::endl;
}

void ClickerView::displayExitMessage() {
    std::cout << "exit" << std::endl;
}


void ClickerView::showGameStateSavedMessage(const std::string& filename) const {
    std::cout << "Game state saved to " << filename << std::endl;
}

void ClickerView::dispFilenameToSave(){
    std::cout<<"Enter filename to save: "<< std::endl;
}
void ClickerView::dispFilenameToLoad(){
    std::cout << "Enter filename to load: "<< std::endl;
}

void ClickerView::dispWelcomeMessage(){

    std::cout << "Press 'b' to gain a point. Press 'e' to exit. Press 's' to save. Press 'l' to load" << std::endl;

}