//
// Created by lucia on 11/26/2024.
//

#ifndef POSTGRADPONDERIN_WINDOW_H
#define POSTGRADPONDERIN_WINDOW_H
#include <SFML/Graphics.hpp>

class Window {
public:
    sf::RenderWindow screen;
    sf::Text screenTitle;
    sf::Font font;

    void windowEvents(); //handles window events like button press
    void draw(); //draws all elements


    Window(const std::string& title, int width, int height);
    void run();

};


#endif //POSTGRADPONDERIN_WINDOW_H
