//
// Created by lucia on 11/19/2024.
//
#include <vector>
#include <string>
#ifndef POSTGRADPONDERIN_COUNTY_H
#define POSTGRADPONDERIN_COUNTY_H


class County {
private:
    //different data points
    //I just put all the categories in the spreadsheet that seemed relevant here idk if we need them all here
    std::string state;
    std::string countyName;
    float percentPoverty;
    float HSDiplomaPercent;
    float unemployment;
    int medianHouseholdIncome;
    float latitude;
    float longitude;
    int population;
    float under5years;
    float under18years;
    float over65years;
    float medianAge;
    float femalePercent;
    float whitePercent;
    float blackPercent;
    float nativePercent;
    float pacIslandPercent;
    float englishLang;
    float foreignLang;
    float veteranPercent;

    //ranking variables
    float score;
public:

};


#endif //POSTGRADPONDERIN_COUNTY_H
