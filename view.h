#ifndef VIEW_H
#define VIEW_H

#include <string>

class ClickerView {
public:
    void displayPoints(int points, int level);
    void displayInvalidInputMessage();
    void displayExitMessage();
    std::string toRoman(int value);
    void showGameStateSavedMessage(const std::string& filename) const;
    void dispFilenameToSave();
    void dispFilenameToLoad();
    void dispWelcomeMessage();
};

#endif 
