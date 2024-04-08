#ifndef VIEW_H
#define VIEW_H

#include <string>

using namespace std;
class ClickerView {
public:
    void displayPoints(int points, std::string level);
    void displayInvalidInputMessage();
    void displayExitMessage();
    void showGameStateSavedMessage(const std::string& filename) const;
    void dispFilenameToSave();
    void dispFilenameToLoad();
    void dispWelcomeMessage();
};

#endif 
