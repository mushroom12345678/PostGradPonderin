//
// Created by lilia on 12/3/2024.
//
#include "ResultWindow.h"
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

ResultWindow::ResultWindow(const std::string &title, int width, int height, vector<Counties>& vect)
{
    screen.create(sf::VideoMode(width, height), title);

    if (!font.loadFromFile("resources/font.ttf")) {
        throw std::runtime_error("Failed to load requested font");
    }

    resultTitle.setFont(font);
    resultTitle.setString("You should move to...");
    resultTitle.setCharacterSize(30);
    resultTitle.setFillColor(sf::Color::Black);
    resultTitle.setStyle(sf::Text::Bold);
    resultTitle.setPosition(10, 10);

    HeapSortTime.setFont(font);
    HeapSortTime.setString("Heap Sort Time: " + to_string(HS));
    HeapSortTime.setCharacterSize(20);
    HeapSortTime.setFillColor(sf::Color::Black);
    HeapSortTime.setStyle(sf::Text::Bold);
    HeapSortTime.setPosition(10, 600);

    MergeSortTime.setFont(font);
    MergeSortTime.setString("Merge Sort Time: " + to_string(MS));
    MergeSortTime.setCharacterSize(20);
    MergeSortTime.setFillColor(sf::Color::Black);
    MergeSortTime.setStyle(sf::Text::Bold);
    MergeSortTime.setPosition(400, 600);

    ResultCounty.setFont(font);
    ResultCounty.setString("Top Result: " + vect[0].getName());
    ResultCounty.setCharacterSize(25);
    ResultCounty.setFillColor(sf::Color::Black);
    ResultCounty.setStyle(sf::Text::Bold);
    ResultCounty.setPosition(10, 55);

    ResultState.setFont(font);
    ResultState.setString("State: " + vect[0].getState());
    ResultState.setCharacterSize(20);
    ResultState.setFillColor(sf::Color::Black);
    ResultState.setStyle(sf::Text::Bold);
    ResultState.setPosition(10, 85);

    ResultLong.setFont(font);
    ResultLong.setString("Longitude: " + to_string(vect[0].getLongitude()));
    ResultLong.setCharacterSize(20);
    ResultLong.setFillColor(sf::Color::Black);
    ResultLong.setStyle(sf::Text::Bold);
    ResultLong.setPosition(10, 115);

    ResultLat.setFont(font);
    ResultLat.setString("Latitude: "+ to_string(vect[0].getLatitude()));
    ResultLat.setCharacterSize(20);
    ResultLat.setFillColor(sf::Color::Black);
    ResultLat.setStyle(sf::Text::Bold);
    ResultLat.setPosition(10, 145);

    ResultAgeUnder5.setFont(font);
    ResultAgeUnder5.setString("Percentage of age under 5: "+ to_string(vect[0].getUnder5()));
    ResultAgeUnder5.setCharacterSize(20);
    ResultAgeUnder5.setFillColor(sf::Color::Black);
    ResultAgeUnder5.setStyle(sf::Text::Bold);
    ResultAgeUnder5.setPosition(10, 175);

    ResultAgeUnder18.setFont(font);
    ResultAgeUnder18.setString("Percentage of age under 18: "+ to_string(vect[0].getUnder18()));
    ResultAgeUnder18.setCharacterSize(20);
    ResultAgeUnder18.setFillColor(sf::Color::Black);
    ResultAgeUnder18.setStyle(sf::Text::Bold);
    ResultAgeUnder18.setPosition(10, 215);

    ResultAgeOver65.setFont(font);
    ResultAgeOver65.setString("Percentage of population that is over 65: "+ to_string(vect[0].getOver65()));
    ResultAgeOver65.setCharacterSize(20);
    ResultAgeOver65.setFillColor(sf::Color::Black);
    ResultAgeOver65.setStyle(sf::Text::Bold);
    ResultAgeOver65.setPosition(10, 245);

    MedianAge.setFont(font);
    MedianAge.setString("Median Age: "+ to_string(vect[0].getMedianAge()));
    MedianAge.setCharacterSize(20);
    MedianAge.setFillColor(sf::Color::Black);
    MedianAge.setStyle(sf::Text::Bold);
    MedianAge.setPosition(10, 275);

    WhitePercent.setFont(font);
    WhitePercent.setString("Caucasian Population Percentage: "+ to_string(vect[0].getWhite()));
    WhitePercent.setCharacterSize(20);
    WhitePercent.setFillColor(sf::Color::Black);
    WhitePercent.setStyle(sf::Text::Bold);
    WhitePercent.setPosition(10, 315);

    FemalePercent.setFont(font);
    FemalePercent.setString("Female Population Percentage: "+ to_string(vect[0].getFemale()));
    FemalePercent.setCharacterSize(20);
    FemalePercent.setFillColor(sf::Color::Black);
    FemalePercent.setStyle(sf::Text::Bold);
    FemalePercent.setPosition(10, 345);

    BlackPercent.setFont(font);
    BlackPercent.setString("African American Population Percentage: "+ to_string(vect[0].getBlack()));
    BlackPercent.setCharacterSize(20);
    BlackPercent.setFillColor(sf::Color::Black);
    BlackPercent.setStyle(sf::Text::Bold);
    BlackPercent.setPosition(10, 375);

    NativePercent.setFont(font);
    NativePercent.setString("Native American Population Percentage: "+ to_string(vect[0].getNative()));
    NativePercent.setCharacterSize(20);
    NativePercent.setFillColor(sf::Color::Black);
    NativePercent.setStyle(sf::Text::Bold);
    NativePercent.setPosition(10, 415);

    PacificIslandPercent.setFont(font);
    PacificIslandPercent.setString("Pacific Island Population Percentage: "+ to_string(vect[0].getPacificIsland()));
    PacificIslandPercent.setCharacterSize(20);
    PacificIslandPercent.setFillColor(sf::Color::Black);
    PacificIslandPercent.setStyle(sf::Text::Bold);
    PacificIslandPercent.setPosition(10, 445);

    SpeakEnglishOnly.setFont(font);
    SpeakEnglishOnly.setString("Percentage that speaks English only: "+ to_string(vect[0].getEnglish()));
    SpeakEnglishOnly.setCharacterSize(20);
    SpeakEnglishOnly.setFillColor(sf::Color::Black);
    SpeakEnglishOnly.setStyle(sf::Text::Bold);
    SpeakEnglishOnly.setPosition(10, 475);

    ForeignLanguage.setFont(font);
    ForeignLanguage.setString("Percentage that speak a foreign language: "+ to_string(vect[0].getForeign()));
    ForeignLanguage.setCharacterSize(20);
    ForeignLanguage.setFillColor(sf::Color::Black);
    ForeignLanguage.setStyle(sf::Text::Bold);
    ForeignLanguage.setPosition(10, 515);

    VeteranPercent.setFont(font);
    VeteranPercent.setString("Percentage that are veterans: "+ to_string(vect[0].getVeteran()));
    VeteranPercent.setCharacterSize(20);
    VeteranPercent.setFillColor(sf::Color::Black);
    VeteranPercent.setStyle(sf::Text::Bold);
    VeteranPercent.setPosition(10, 545);


    ResultCounty2.setFont(font);
    ResultCounty2.setString("Next Result: " + vect[1].getName());
    ResultCounty2.setCharacterSize(25);
    ResultCounty2.setFillColor(sf::Color::Black);
    ResultCounty2.setStyle(sf::Text::Bold);
    ResultCounty2.setPosition(700, 55);

    ResultState2.setFont(font);
    ResultState2.setString("State: " + vect[1].getState());
    ResultState2.setCharacterSize(20);
    ResultState2.setFillColor(sf::Color::Black);
    ResultState2.setStyle(sf::Text::Bold);
    ResultState2.setPosition(700, 85);

    ResultLong2.setFont(font);
    ResultLong2.setString("Longitude: " + to_string(vect[1].getLongitude()));
    ResultLong2.setCharacterSize(20);
    ResultLong2.setFillColor(sf::Color::Black);
    ResultLong2.setStyle(sf::Text::Bold);
    ResultLong2.setPosition(700, 115);

    ResultLat2.setFont(font);
    ResultLat2.setString("Latitude: "+ to_string(vect[1].getLatitude()));
    ResultLat2.setCharacterSize(20);
    ResultLat2.setFillColor(sf::Color::Black);
    ResultLat2.setStyle(sf::Text::Bold);
    ResultLat2.setPosition(700, 145);

    ResultAgeUnder52.setFont(font);
    ResultAgeUnder52.setString("Percentage of age under 5: "+ to_string(vect[1].getUnder5()));
    ResultAgeUnder52.setCharacterSize(20);
    ResultAgeUnder52.setFillColor(sf::Color::Black);
    ResultAgeUnder52.setStyle(sf::Text::Bold);
    ResultAgeUnder52.setPosition(700, 175);

    ResultAgeUnder182.setFont(font);
    ResultAgeUnder182.setString("Percentage of age under 18: "+ to_string(vect[1].getUnder18()));
    ResultAgeUnder182.setCharacterSize(20);
    ResultAgeUnder182.setFillColor(sf::Color::Black);
    ResultAgeUnder182.setStyle(sf::Text::Bold);
    ResultAgeUnder182.setPosition(700, 215);

    ResultAgeOver652.setFont(font);
    ResultAgeOver652.setString("Percentage of population that is over 65: "+ to_string(vect[1].getOver65()));
    ResultAgeOver652.setCharacterSize(20);
    ResultAgeOver652.setFillColor(sf::Color::Black);
    ResultAgeOver652.setStyle(sf::Text::Bold);
    ResultAgeOver652.setPosition(700, 245);

    MedianAge2.setFont(font);
    MedianAge2.setString("Median Age: "+ to_string(vect[1].getMedianAge()));
    MedianAge2.setCharacterSize(20);
    MedianAge2.setFillColor(sf::Color::Black);
    MedianAge2.setStyle(sf::Text::Bold);
    MedianAge2.setPosition(700, 275);

    WhitePercent2.setFont(font);
    WhitePercent2.setString("Caucasian Population Percentage: "+ to_string(vect[1].getWhite()));
    WhitePercent2.setCharacterSize(20);
    WhitePercent2.setFillColor(sf::Color::Black);
    WhitePercent2.setStyle(sf::Text::Bold);
    WhitePercent2.setPosition(700, 315);

    FemalePercent2.setFont(font);
    FemalePercent2.setString("Female Population Percentage: "+ to_string(vect[1].getFemale()));
    FemalePercent2.setCharacterSize(20);
    FemalePercent2.setFillColor(sf::Color::Black);
    FemalePercent2.setStyle(sf::Text::Bold);
    FemalePercent2.setPosition(700, 345);

    BlackPercent2.setFont(font);
    BlackPercent2.setString("African American Population Percentage: "+ to_string(vect[1].getBlack()));
    BlackPercent2.setCharacterSize(20);
    BlackPercent2.setFillColor(sf::Color::Black);
    BlackPercent2.setStyle(sf::Text::Bold);
    BlackPercent2.setPosition(700, 375);

    NativePercent2.setFont(font);
    NativePercent2.setString("Native American Population Percentage: "+ to_string(vect[1].getNative()));
    NativePercent2.setCharacterSize(20);
    NativePercent2.setFillColor(sf::Color::Black);
    NativePercent2.setStyle(sf::Text::Bold);
    NativePercent2.setPosition(700, 415);

    PacificIslandPercent2.setFont(font);
    PacificIslandPercent2.setString("Pacific Island Population Percentage: "+ to_string(vect[1].getPacificIsland()));
    PacificIslandPercent2.setCharacterSize(20);
    PacificIslandPercent2.setFillColor(sf::Color::Black);
    PacificIslandPercent2.setStyle(sf::Text::Bold);
    PacificIslandPercent2.setPosition(700, 445);

    SpeakEnglishOnly2.setFont(font);
    SpeakEnglishOnly2.setString("Percentage that speaks English only: "+ to_string(vect[1].getEnglish()));
    SpeakEnglishOnly2.setCharacterSize(20);
    SpeakEnglishOnly2.setFillColor(sf::Color::Black);
    SpeakEnglishOnly2.setStyle(sf::Text::Bold);
    SpeakEnglishOnly2.setPosition(700, 475);

    ForeignLanguage2.setFont(font);
    ForeignLanguage2.setString("Percentage that speak a foreign language: "+ to_string(vect[1].getForeign()));
    ForeignLanguage2.setCharacterSize(20);
    ForeignLanguage2.setFillColor(sf::Color::Black);
    ForeignLanguage2.setStyle(sf::Text::Bold);
    ForeignLanguage2.setPosition(700, 515);

    VeteranPercent2.setFont(font);
    VeteranPercent2.setString("Percentage that are veterans: "+ to_string(vect[1].getVeteran()));
    VeteranPercent2.setCharacterSize(20);
    VeteranPercent2.setFillColor(sf::Color::Black);
    VeteranPercent2.setStyle(sf::Text::Bold);
    VeteranPercent2.setPosition(700, 545);


    ResultCounty3.setFont(font);
    ResultCounty3.setString("Next Result: " + vect[2].getName());
    ResultCounty3.setCharacterSize(25);
    ResultCounty3.setFillColor(sf::Color::Black);
    ResultCounty3.setStyle(sf::Text::Bold);
    ResultCounty3.setPosition(1400, 55);

    ResultState3.setFont(font);
    ResultState3.setString("State: " + vect[2].getState());
    ResultState3.setCharacterSize(20);
    ResultState3.setFillColor(sf::Color::Black);
    ResultState3.setStyle(sf::Text::Bold);
    ResultState3.setPosition(1400, 85);

    ResultLong3.setFont(font);
    ResultLong3.setString("Longitude: " + to_string(vect[2].getLongitude()));
    ResultLong3.setCharacterSize(20);
    ResultLong3.setFillColor(sf::Color::Black);
    ResultLong3.setStyle(sf::Text::Bold);
    ResultLong3.setPosition(1400, 115);

    ResultLat3.setFont(font);
    ResultLat3.setString("Latitude: "+ to_string(vect[2].getLatitude()));
    ResultLat3.setCharacterSize(20);
    ResultLat3.setFillColor(sf::Color::Black);
    ResultLat3.setStyle(sf::Text::Bold);
    ResultLat3.setPosition(1400, 145);

    ResultAgeUnder53.setFont(font);
    ResultAgeUnder53.setString("Percentage of age under 5: "+ to_string(vect[2].getUnder5()));
    ResultAgeUnder53.setCharacterSize(20);
    ResultAgeUnder53.setFillColor(sf::Color::Black);
    ResultAgeUnder53.setStyle(sf::Text::Bold);
    ResultAgeUnder53.setPosition(1400, 175);

    ResultAgeUnder183.setFont(font);
    ResultAgeUnder183.setString("Percentage of age under 18: "+ to_string(vect[2].getUnder18()));
    ResultAgeUnder183.setCharacterSize(20);
    ResultAgeUnder183.setFillColor(sf::Color::Black);
    ResultAgeUnder183.setStyle(sf::Text::Bold);
    ResultAgeUnder183.setPosition(1400, 215);

    ResultAgeOver653.setFont(font);
    ResultAgeOver653.setString("Percentage of population that is over 65: "+ to_string(vect[2].getOver65()));
    ResultAgeOver653.setCharacterSize(20);
    ResultAgeOver653.setFillColor(sf::Color::Black);
    ResultAgeOver653.setStyle(sf::Text::Bold);
    ResultAgeOver653.setPosition(1400, 245);

    MedianAge3.setFont(font);
    MedianAge3.setString("Median Age: "+ to_string(vect[2].getMedianAge()));
    MedianAge3.setCharacterSize(20);
    MedianAge3.setFillColor(sf::Color::Black);
    MedianAge3.setStyle(sf::Text::Bold);
    MedianAge3.setPosition(1400, 275);

    WhitePercent3.setFont(font);
    WhitePercent3.setString("Caucasian Population Percentage: "+ to_string(vect[2].getWhite()));
    WhitePercent3.setCharacterSize(20);
    WhitePercent3.setFillColor(sf::Color::Black);
    WhitePercent3.setStyle(sf::Text::Bold);
    WhitePercent3.setPosition(1400, 315);

    FemalePercent3.setFont(font);
    FemalePercent3.setString("Female Population Percentage: "+ to_string(vect[2].getFemale()));
    FemalePercent3.setCharacterSize(20);
    FemalePercent3.setFillColor(sf::Color::Black);
    FemalePercent3.setStyle(sf::Text::Bold);
    FemalePercent3.setPosition(1400, 345);

    BlackPercent3.setFont(font);
    BlackPercent3.setString("African American Population Percentage: "+ to_string(vect[2].getBlack()));
    BlackPercent3.setCharacterSize(20);
    BlackPercent3.setFillColor(sf::Color::Black);
    BlackPercent3.setStyle(sf::Text::Bold);
    BlackPercent3.setPosition(1400, 375);

    NativePercent3.setFont(font);
    NativePercent3.setString("Native American Population Percentage: "+ to_string(vect[2].getNative()));
    NativePercent3.setCharacterSize(20);
    NativePercent3.setFillColor(sf::Color::Black);
    NativePercent3.setStyle(sf::Text::Bold);
    NativePercent3.setPosition(1400, 415);

    PacificIslandPercent3.setFont(font);
    PacificIslandPercent3.setString("Pacific Island Population Percentage: "+ to_string(vect[2].getPacificIsland()));
    PacificIslandPercent3.setCharacterSize(20);
    PacificIslandPercent3.setFillColor(sf::Color::Black);
    PacificIslandPercent3.setStyle(sf::Text::Bold);
    PacificIslandPercent3.setPosition(1400, 445);

    SpeakEnglishOnly3.setFont(font);
    SpeakEnglishOnly3.setString("Percentage that speaks English only: "+ to_string(vect[2].getEnglish()));
    SpeakEnglishOnly3.setCharacterSize(20);
    SpeakEnglishOnly3.setFillColor(sf::Color::Black);
    SpeakEnglishOnly3.setStyle(sf::Text::Bold);
    SpeakEnglishOnly3.setPosition(1400, 475);

    ForeignLanguage3.setFont(font);
    ForeignLanguage3.setString("Percentage that speak a foreign language: "+ to_string(vect[2].getForeign()));
    ForeignLanguage3.setCharacterSize(20);
    ForeignLanguage3.setFillColor(sf::Color::Black);
    ForeignLanguage3.setStyle(sf::Text::Bold);
    ForeignLanguage3.setPosition(1400, 515);

    VeteranPercent3.setFont(font);
    VeteranPercent3.setString("Percentage that are veterans: "+ to_string(vect[2].getVeteran()));
    VeteranPercent3.setCharacterSize(20);
    VeteranPercent3.setFillColor(sf::Color::Black);
    VeteranPercent3.setStyle(sf::Text::Bold);
    VeteranPercent3.setPosition(1400, 545);

}

void ResultWindow::setMS(double val)
{
    MS = val;
}

void ResultWindow::setHS(double val)
{
    HS = val;
}

void ResultWindow::windowEvents()
{
    sf::Event event;
    while (screen.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            screen.close();
        }
    }
}

void ResultWindow::draw()
{
    screen.clear(sf::Color::White);
    screen.draw(resultTitle);
    screen.draw(ResultCounty);
    screen.draw(ResultState);
    screen.draw(ResultLong);
    screen.draw(ResultLat);
    screen.draw(ResultAgeUnder5);
    screen.draw(ResultAgeUnder18);
    screen.draw(ResultAgeOver65);
    screen.draw(MedianAge);
    screen.draw(WhitePercent);
    screen.draw(FemalePercent);
    screen.draw(BlackPercent);
    screen.draw(PacificIslandPercent);
    screen.draw(NativePercent);
    screen.draw(SpeakEnglishOnly);
    screen.draw(ForeignLanguage);
    screen.draw(VeteranPercent);
    screen.draw(ResultCounty2);
    screen.draw(ResultState2);
    screen.draw(ResultLong2);
    screen.draw(ResultLat2);
    screen.draw(ResultAgeUnder52);
    screen.draw(ResultAgeUnder182);
    screen.draw(ResultAgeOver652);
    screen.draw(MedianAge2);
    screen.draw(WhitePercent2);
    screen.draw(FemalePercent2);
    screen.draw(BlackPercent2);
    screen.draw(PacificIslandPercent2);
    screen.draw(NativePercent2);
    screen.draw(SpeakEnglishOnly2);
    screen.draw(ForeignLanguage2);
    screen.draw(VeteranPercent2);
    screen.draw(ResultCounty3);
    screen.draw(ResultState3);
    screen.draw(ResultLong3);
    screen.draw(ResultLat3);
    screen.draw(ResultAgeUnder53);
    screen.draw(ResultAgeUnder183);
    screen.draw(ResultAgeOver653);
    screen.draw(MedianAge3);
    screen.draw(WhitePercent3);
    screen.draw(FemalePercent3);
    screen.draw(BlackPercent3);
    screen.draw(PacificIslandPercent3);
    screen.draw(NativePercent3);
    screen.draw(SpeakEnglishOnly3);
    screen.draw(ForeignLanguage3);
    screen.draw(VeteranPercent3);
    screen.draw(HeapSortTime);
    screen.draw(MergeSortTime);
    screen.display();
}

void ResultWindow::run(){
    while(screen.isOpen()){
        windowEvents();
        draw();
    }
}

