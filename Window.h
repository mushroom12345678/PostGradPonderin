//
// Created by lucia on 11/26/2024.
//

#ifndef POSTGRADPONDERIN_WINDOW_H
#define POSTGRADPONDERIN_WINDOW_H
#include <SFML/Graphics.hpp>
#include <set>
#include "Counties.h"
#pragma once
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

    sf::Text resultTitle;
    sf::Text ResultCounty;
    sf::Text ResultState;
    sf::Text ResultPoverty;
    sf::Text topResultEduction;
    sf::Text topResultUnemployment;
    sf::Text topResultIncome;

    sf::RectangleShape textBoxPoverty;
    sf::RectangleShape textBoxUnemployment;
    sf::RectangleShape textBoxIncome;
    sf::RectangleShape textBoxEducation;
    sf::RectangleShape submit;
    sf::Text submittext;
    string inputPoverty;
    string inputEducation;
    string inputUnemployment;
    string inputIncome;

    sf::Text outputPoverty;
    sf::Text outputEducation;
    sf::Text outputUnemployment;
    sf::Text outputIncome;

    set<char> uniqueInputs; // tracks unique input ranking characters
    map<char, int> charCounts; //tracks occurrences of ranking character
    bool showResults = false;

    enum ActiveBox {None, Poverty, Education, Unemployment, Income, Submit} activeBox = None;
    void windowEvents(); //handles window events like button press
    void draw(); //draws all elements

    string getInputUnemployment();
    string getInputPoverty();
    string getInputEducation();
    string getInputIncome();

    Window(const std::string& title, int width, int height, vector<Counties>& vect);
    void run();
    void clear();

};


#endif //POSTGRADPONDERIN_WINDOW_H
