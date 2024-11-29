//
// Created by lucia on 11/26/2024.
//

#ifndef POSTGRADPONDERIN_WINDOW_H
#define POSTGRADPONDERIN_WINDOW_H
#include <SFML/Graphics.hpp>
using namespace std;

class Window {
public:
    sf::RenderWindow screen;
    sf::Text screenTitle;
    sf::Font font;
    sf::Text promptPoverty;
    sf::Text promptEducation;
    sf::Text promptUnemployment;
    sf::Text promptIncome;
    sf::Text instructions;

    sf::RectangleShape textBoxPoverty;
    sf::RectangleShape textBoxUnemployment;
    sf::RectangleShape textBoxIncome;
    sf::RectangleShape textBoxEducation;// Rectangle for the input area
    string inputPoverty;
    string inputEducation;
    string inputUnemployment;
    string inputIncome;

    sf::Text outputPoverty;
    sf::Text outputEducation;
    sf::Text outputUnemployment;
    sf::Text outputIncome;

    enum ActiveBox {None, Poverty, Education, Unemployment, Income} activeBox = None;
    void windowEvents(); //handles window events like button press
    void draw(); //draws all elements


    Window(const std::string& title, int width, int height);
    void run();

};


#endif //POSTGRADPONDERIN_WINDOW_H
