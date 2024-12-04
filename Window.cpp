//
// Created by lucia on 11/26/2024.
//
#include <set>
#include "Window.h"
#include <iostream>
using namespace std;

Window::Window(const std::string &title, int width, int height, vector<Counties>& vect) {
    screen.create(sf::VideoMode(width, height), title);

    if(!font.loadFromFile("resources/font.ttf")){
        throw std::runtime_error("Failed to load requested font");
    }

    //configure text
    ResultCounty.setFont(font);
    ResultCounty.setString("Top Result: " + vect[0].getName());
    ResultCounty.setCharacterSize(20);
    ResultCounty.setFillColor(sf::Color::Black);
    ResultCounty.setStyle(sf::Text::Bold);
    ResultCounty.setPosition(80, 55);

    ResultState.setFont(font);
    ResultState.setString("State: " + vect[0].getState());
    ResultState.setCharacterSize(20);
    ResultState.setFillColor(sf::Color::Black);
    ResultState.setStyle(sf::Text::Bold);
    ResultState.setPosition(80, 85);
/*
    ResultIncome.setFont(font);
    ResultIncome.setString("State: " + vect[0].getIncome());
    ResultIncome.setCharacterSize(20);
    ResultIncome.setFillColor(sf::Color::Black);
    ResultIncome.setStyle(sf::Text::Bold);
    ResultIncome.setPosition(80, 85);
*/
    resultTitle.setFont(font);
    resultTitle.setString("You should move to...");
    resultTitle.setCharacterSize(30);
    resultTitle.setFillColor(sf::Color::Black);
    resultTitle.setStyle(sf::Text::Bold);
    resultTitle.setPosition(200, 10);

    screenTitle.setFont(font);
    screenTitle.setString("Post Grad Ponderin");
    screenTitle.setCharacterSize(30);
    screenTitle.setFillColor(sf::Color::Black);
    screenTitle.setStyle(sf::Text::Bold);
    screenTitle.setPosition(250, 10);

    instructions.setFont(font);
    instructions.setString("Assign each criteria a score of 0 through 9.\n9 is the highest ranking, and 0 is the lowest.");
    instructions.setCharacterSize(18);
    instructions.setStyle(sf::Text::Bold);
    instructions.setFillColor(sf::Color::Black);
    instructions.setPosition(150, 60);

    promptPoverty.setFont(font);
    promptPoverty.setString("Rank the importance of low poverty rates:");
    promptPoverty.setCharacterSize(18);
    promptPoverty.setFillColor(sf::Color::Blue);
    promptPoverty.setStyle(sf::Text::Bold);
    promptPoverty.setPosition(50, 170);

    textBoxPoverty.setSize(sf::Vector2f(300, 50));
    textBoxPoverty.setFillColor(sf::Color::White);
    textBoxPoverty.setOutlineColor(sf::Color::Black);
    textBoxPoverty.setOutlineThickness(2);
    textBoxPoverty.setPosition(50, 210);

    promptEducation.setFont(font);
    promptEducation.setString("Rank the importance of good education:");
    promptEducation.setCharacterSize(18);
    promptEducation.setFillColor(sf::Color::Blue);
    promptEducation.setStyle(sf::Text::Bold);
    promptEducation.setPosition(50, 280);

    textBoxEducation.setSize(sf::Vector2f(300, 50));
    textBoxEducation.setFillColor(sf::Color::White);
    textBoxEducation.setOutlineColor(sf::Color::Black);
    textBoxEducation.setOutlineThickness(2);
    textBoxEducation.setPosition(50, 320);

    promptUnemployment.setFont(font);
    promptUnemployment.setString("Rank the importance of low unemployment:");
    promptUnemployment.setCharacterSize(18);
    promptUnemployment.setFillColor(sf::Color::Blue);
    promptUnemployment.setStyle(sf::Text::Bold);
    promptUnemployment.setPosition(50, 380);

    textBoxUnemployment.setSize(sf::Vector2f(300, 50));
    textBoxUnemployment.setFillColor(sf::Color::White);
    textBoxUnemployment.setOutlineColor(sf::Color::Black);
    textBoxUnemployment.setOutlineThickness(2);
    textBoxUnemployment.setPosition(50, 420);

    promptIncome.setFont(font);
    promptIncome.setString("Rank the importance of high income:");
    promptIncome.setCharacterSize(18);
    promptIncome.setFillColor(sf::Color::Blue);
    promptIncome.setStyle(sf::Text::Bold);
    promptIncome.setPosition(50, 480);

    textBoxIncome.setSize(sf::Vector2f(300, 50));
    textBoxIncome.setFillColor(sf::Color::White);
    textBoxIncome.setOutlineColor(sf::Color::Black);
    textBoxIncome.setOutlineThickness(2);
    textBoxIncome.setPosition(50, 530);

    outputPoverty.setFont(font);
    outputPoverty.setCharacterSize(24);
    outputPoverty.setFillColor(sf::Color::Black);
    outputPoverty.setPosition(60, 160);

    outputEducation.setFont(font);
    outputEducation.setCharacterSize(24);
    outputEducation.setFillColor(sf::Color::Black);
    outputEducation.setPosition(60, 160);

    outputIncome.setFont(font);
    outputIncome.setCharacterSize(24);
    outputIncome.setFillColor(sf::Color::Black);
    outputIncome.setPosition(60, 160);

    outputUnemployment.setFont(font);
    outputUnemployment.setCharacterSize(24);
    outputUnemployment.setFillColor(sf::Color::Black);
    outputUnemployment.setPosition(60, 160);

    submit.setSize(sf::Vector2f(600, 50));
    submit.setFillColor(sf::Color::Green);
    submit.setOutlineColor(sf::Color::Black);
    submit.setOutlineThickness(2);
    submit.setPosition(100, 700);

    submittext.setFont(font);
    submittext.setCharacterSize(30);
    submittext.setFillColor(sf::Color::Black);
    submittext.setPosition(350,700);
    submittext.setString("SUBMIT");



}

void Window::windowEvents() {
    sf::Event event;
    while(screen.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            screen.close();
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (textBoxPoverty.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Poverty;
            }
            else if (textBoxIncome.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Income;
            }
            else if (textBoxEducation.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Education;
            }
            else if (textBoxUnemployment.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Unemployment;
            }
            else if(submit.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                if (!inputPoverty.empty() and !inputIncome.empty() and !inputEducation.empty() and !inputUnemployment.empty()) {
                    activeBox = Submit;
                    showResults = true;
                    screen.close();
                }
            }
            else
            {
                activeBox = None;
            }
        }

            if (event.type == sf::Event::TextEntered){
                if ((event.text.unicode >= '0' && event.text.unicode <= '9') || event.text.unicode == 8){
                    char enteredChar = static_cast<char>(event.text.unicode);

                    if(activeBox==Poverty){
                        if(enteredChar == 8){
                            if(!inputPoverty.empty()){
                                char charToRemove = inputPoverty.back(); //getting character being removed
                                inputPoverty.pop_back(); //removing char

                                charCounts[charToRemove]--;
                                if(charCounts[charToRemove] == 0){
                                    uniqueInputs.erase(charToRemove); // removing from set
                                }

                            }
                        } else if(inputPoverty.empty()){ // only allows the user to add a rank if there isn't one already
                            inputPoverty += enteredChar;
                            uniqueInputs.insert(enteredChar);
                            charCounts[enteredChar]++;
                        }
                        outputPoverty.setString(inputPoverty);
                        outputPoverty.setPosition(textBoxPoverty.getPosition().x + 10, textBoxPoverty.getPosition().y + 10);
                    }
                    else if(activeBox == Education){
                        if(enteredChar == 8){
                            if(!inputEducation.empty()){
                                char charToRemove = inputEducation.back();
                                inputEducation.pop_back();

                                charCounts[charToRemove]--;
                                if(charCounts[charToRemove] == 0){
                                    uniqueInputs.erase(charToRemove); // removing from set
                                }
                            }
                        } else if(inputEducation.empty()){
                            inputEducation += enteredChar;
                            uniqueInputs.insert(enteredChar);
                            charCounts[enteredChar]++;
                        }
                        outputEducation.setString(inputEducation);
                        outputEducation.setPosition(textBoxEducation.getPosition().x + 10, textBoxEducation.getPosition().y + 10);
                    }
                    else if(activeBox == Unemployment){
                        if(enteredChar == 8){
                            if(!inputUnemployment.empty()){
                                char charToRemove = inputUnemployment.back();
                                inputUnemployment.pop_back();

                                charCounts[charToRemove]--;
                                if(charCounts[charToRemove] == 0){
                                    uniqueInputs.erase(charToRemove); // removing from set
                                }
                            }
                        } else if(inputUnemployment.empty()){
                            inputUnemployment += enteredChar;
                            uniqueInputs.insert(enteredChar);
                            charCounts[enteredChar]++;
                        }
                        outputUnemployment.setString(inputUnemployment);
                        outputUnemployment.setPosition(textBoxUnemployment.getPosition().x + 10, textBoxUnemployment.getPosition().y + 10);
                    }
                    else if(activeBox == Income ){
                        if(enteredChar == 8){
                            if(!inputIncome.empty()){
                                char charToRemove = inputIncome.back();
                                inputIncome.pop_back();

                                charCounts[charToRemove]--;
                                if(charCounts[charToRemove] == 0){
                                    uniqueInputs.erase(charToRemove); // removing from set
                                }
                            }
                        } else if(inputIncome.empty()){
                            inputIncome += enteredChar;
                            uniqueInputs.insert(enteredChar);
                            charCounts[enteredChar]++;
                        }
                        outputIncome.setString(inputIncome);
                        outputIncome.setPosition(textBoxIncome.getPosition().x + 10, textBoxIncome.getPosition().y + 10);
                    }
                    else if(activeBox == Submit)
                    {
                        screen.close();
                    }
                }
            }
    }
}

string Window::getInputEducation()
{
    return inputEducation;
}
string Window::getInputIncome()
{
    return inputIncome;
}
string Window::getInputUnemployment()
{
    return inputUnemployment;
}
string Window::getInputPoverty()
{
    return inputPoverty;
}

void Window::draw()
{
        screen.clear(sf::Color::White);
        screen.draw(screenTitle);
        screen.draw(promptPoverty);
        screen.draw(textBoxPoverty);
        screen.draw(promptEducation);
        screen.draw(textBoxEducation);
        screen.draw(promptUnemployment);
        screen.draw(textBoxUnemployment);
        screen.draw(promptIncome);
        screen.draw(textBoxIncome);
        screen.draw(outputIncome);
        screen.draw(outputEducation);
        screen.draw(outputPoverty);
        screen.draw(outputUnemployment);
        screen.draw(instructions);
        screen.draw(submit);
        screen.draw(submittext);
        screen.display();
    }


void Window::run(){
    while(screen.isOpen()){
        windowEvents();
        draw();
    }
}