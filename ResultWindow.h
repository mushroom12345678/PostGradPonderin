
#include <SFML/Graphics.hpp>
#include <set>
#include "Counties.h"
#pragma once
#include <chrono>
using namespace std;

class ResultWindow {
public:
    sf::RenderWindow screen;
    sf::Text resultTitle;
    sf::Font font;
    sf::Text ResultCounty;
    sf::Text ResultState;
    sf::Text ResultLong;
    sf::Text ResultLat;
    sf::Text ResultAgeUnder5;
    sf::Text ResultAgeUnder18;
    sf::Text ResultAgeOver65;
    sf::Text MedianAge;
    sf::Text FemalePercent;
    sf::Text WhitePercent;
    sf::Text BlackPercent;
    sf::Text NativePercent;
    sf::Text PacificIslandPercent;
    sf::Text SpeakEnglishOnly;
    sf::Text ForeignLanguage;
    sf::Text VeteranPercent;



    sf::Text ResultCounty2;
    sf::Text ResultState2;
    sf::Text ResultLong2;
    sf::Text ResultLat2;
    sf::Text ResultAgeUnder52;
    sf::Text ResultAgeUnder182;
    sf::Text ResultAgeOver652;
    sf::Text MedianAge2;
    sf::Text FemalePercent2;
    sf::Text WhitePercent2;
    sf::Text BlackPercent2;
    sf::Text NativePercent2;
    sf::Text PacificIslandPercent2;
    sf::Text SpeakEnglishOnly2;
    sf::Text ForeignLanguage2;
    sf::Text VeteranPercent2;

    sf::Text ResultCounty3;
    sf::Text ResultState3;
    sf::Text ResultLong3;
    sf::Text ResultLat3;
    sf::Text ResultAgeUnder53;
    sf::Text ResultAgeUnder183;
    sf::Text ResultAgeOver653;
    sf::Text MedianAge3;
    sf::Text FemalePercent3;
    sf::Text WhitePercent3;
    sf::Text BlackPercent3;
    sf::Text NativePercent3;
    sf::Text PacificIslandPercent3;
    sf::Text SpeakEnglishOnly3;
    sf::Text ForeignLanguage3;
    sf::Text VeteranPercent3;

    sf::Text HeapSortTime;
    sf::Text MergeSortTime;

    double HS;
    double MS;


    void windowEvents();
    ResultWindow(const std::string& title, int width, int height, vector<Counties>& vect);
    void draw();
    void run();
    void setMS(double);
    void setHS(double);

};

#ifndef POSTGRADPONDERIN_RESULTWINDOW_H
#define POSTGRADPONDERIN_RESULTWINDOW_H

#endif //POSTGRADPONDERIN_RESULTWINDOW_H
