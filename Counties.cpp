#include "Counties.h"
#include <map>
#include <vector>
using namespace std;

float Counties::getPoverty() { return povertyPercent;}
float Counties::getUnemployment() { return unemploymentRate;}
float Counties::getEducation() { return HSDiplomaPercent;}
float Counties::getIncome() { return medianHouseholdIncome;}
float Counties::getScore() {return score;}
float Counties::getNormalizedEducation() {return normalizedEducation;}
float Counties::getNormalizedIncome() {return normalizedIncome;}
float Counties::getNormalizedUnemployment() {return normalizedUnemployment;}
float Counties::getLongitude() {return longitude;}
float Counties::getLatitude() {return latitude;}
float Counties::getUnder5() {return ageUnder5Percent ;}
float Counties::getUnder18() {return latitude;}
float Counties::getOver65() {return latitude;}
float Counties::getMedianAge() {return medianAge;}
float Counties::getFemale() {return femalePercent;}
float Counties::getWhite() {return whitePercent;}
float Counties::getBlack() {return blackPercent;}
float Counties::getNative() {return nativePercent;}
float Counties::getPacificIsland() {return pacificIslandPercent;}
float Counties::getEnglish() {return speakEnglishOnlyPercent;}
float Counties::getForeign() {return foreignLanguageSpokenAtHomePercent;}
float Counties::getVeteran() {return veteranPercent;}

float Counties::getNormalizedPoverty() {return normalizedPoverty;}
void Counties::setScore(float value) {score = value;}
string Counties::getName() { return countyName;}
string Counties::getState() {return state;}
void Counties::setFIPSCode(int fips) { FIPSCode = fips; }
void Counties::setState(string stateName) { state = stateName; }
void Counties::setCountyName(string name) { countyName = name; }
void Counties::setPovertyPercent(float poverty) { povertyPercent = poverty; }
void Counties::setHSDiplomaPercent(float hsDiploma) { HSDiplomaPercent = hsDiploma; }
void Counties::setUnemploymentRate(float unemployment) { unemploymentRate = unemployment; }
void Counties::setMedianHouseholdIncome(float income) { medianHouseholdIncome = income; }
void Counties::setLatitude(float lat) { latitude = lat; }
void Counties::setLongitude(float lon) { longitude = lon; }
void Counties::setPopulation(float pop) { population = pop; }
void Counties::setAgeUnder5Percent(float under5) { ageUnder5Percent = under5; }
void Counties::setAgeUnder18Percent(float under18) { ageUnder18Percent = under18; }
void Counties::setAgeOver65Percent(float over65) { ageOver65Percent = over65; }
void Counties::setMedianAge(float median) { medianAge = median; }
void Counties::setFemalePercent(float female) { femalePercent = female; }
void Counties::setWhitePercent(float white) { whitePercent = white; }
void Counties::setBlackPercent(float black) { blackPercent = black; }
void Counties::setNativePercent(float nativePercent) { this->nativePercent = nativePercent; }
void Counties::setPacificIslandPercent(float pacificIsland) { pacificIslandPercent = pacificIsland; }
void Counties::setSpeakEnglishOnlyPercent(float englishOnly) { speakEnglishOnlyPercent = englishOnly; }
void Counties::setForeignLanguageSpokenAtHomePercent(float foreignLanguage) { foreignLanguageSpokenAtHomePercent = foreignLanguage; }
void Counties::setVeteranPercent(float veterans) { veteranPercent = veterans; }
void Counties::setUrbanInfluenceCode2003(float code) { urbanInfluenceCode2003 = code; }
void Counties::setUrbanInfluenceCode2013(float code) { urbanInfluenceCode2013 = code; }
void Counties::setRuralUrbanContinuumCode2013(float code) { ruralUrbanContinuumCode2013 = code; }
void Counties::setRuralUrbanContinuumCode2023(float code) { ruralUrbanContinuumCode2023 = code; }
void Counties::setLessThanHSDiploma1970(float value) { lessThanHSDiploma1970 = value; }
void Counties::setHSDiplomaOnly1970(float value) { HSDiplomaOnly1970 = value; }
void Counties::setSomeCollege1970(float value) { someCollege1970 = value; }
void Counties::setFourYearsCollege1970(float value) { fourYearsCollege1970 = value; }

void Counties::print() {
    cout << "FIPS Code: " << FIPSCode << endl;
    cout << "County Name: " << countyName << endl;
    cout << "State: " << state << endl;
    cout << "Poverty Percent: " << povertyPercent << "%" << endl;
    cout << "High School Diploma Percent: " << HSDiplomaPercent << "%" << endl;
    cout << "Unemployment Rate: " << unemploymentRate << "%" << endl;
    cout << "Median Household Income: $" << medianHouseholdIncome << endl;
    cout << "Latitude: " << latitude << endl;
    cout << "Longitude: " << longitude << endl;
    cout << "Population: " << population << endl;
    cout << "Age Under 5 Percent: " << ageUnder5Percent << "%" << endl;
    cout << "Age Under 18 Percent: " << ageUnder18Percent << "%" << endl;
    cout << "Age Over 65 Percent: " << ageOver65Percent << "%" << endl;
    cout << "Median Age: " << medianAge << endl;
    cout << "Female Percent: " << femalePercent << "%" << endl;
    cout << "White Percent: " << whitePercent << "%" << endl;
    cout << "Black Percent: " << blackPercent << "%" << endl;
    cout << "Native Percent: " << nativePercent << "%" << endl;
    cout << "Pacific Island Percent: " << pacificIslandPercent << "%" << endl;
    cout << "Speak English Only Percent: " << speakEnglishOnlyPercent << "%" << endl;
    cout << "Foreign Language Spoken At Home Percent: " << foreignLanguageSpokenAtHomePercent << "%" << endl;
    cout << "Veteran Percent: " << veteranPercent << "%" << endl;
    cout << "Urban Influence Code (2003): " << urbanInfluenceCode2003 << endl;
    cout << "Urban Influence Code (2013): " << urbanInfluenceCode2013 << endl;
    cout << "Rural-Urban Continuum Code (2013): " << ruralUrbanContinuumCode2013 << endl;
    cout << "Rural-Urban Continuum Code (2023): " << ruralUrbanContinuumCode2023 << endl;
    cout << "Less than High School Diploma (1970): " << lessThanHSDiploma1970 << endl;
    cout << "High School Diploma Only (1970): " << HSDiplomaOnly1970 << endl;
    cout << "Some College (1970): " << someCollege1970 << endl;
    cout << "Four Years College (1970): " << fourYearsCollege1970 << endl << endl;

}
void Counties::setNormalizedPoverty(float val)
{
    if(val == -1)
    {
        normalizedPoverty = 0;
    }
    else if(val < 6)
    {
        normalizedPoverty = 17;
    }
    else if(val < 7)
    {
        normalizedPoverty = 16;
    }
    else if(val < 8)
    {
        normalizedPoverty = 15;
    }
    else if(val < 9)
    {
        normalizedPoverty = 14;
    }
    else if(val < 10)
    {
        normalizedPoverty = 13;
    }

    else if(val < 11)
    {
        normalizedPoverty = 12;
    }
    else if(val < 12)
    {
        normalizedPoverty = 11;
    }
    else if(val < 13)
    {
        normalizedPoverty = 10;
    }
    else if(val < 14)
    {
        normalizedPoverty = 9;
    }
    else if(val < 15)
    {
        normalizedPoverty = 8;
    }
    else if(val < 16)
    {
        normalizedPoverty = 7 ;
    }
    else if(val < 17)
    {
        normalizedPoverty = 6 ;
    }
    else if(val < 18)
    {
        normalizedPoverty = 5;
    }
    else if(val < 19)
    {
        normalizedPoverty = 4;
    }
    else if(val < 20)
    {
        normalizedPoverty = 3;
    }
    else if(val < 21)
    {
        normalizedPoverty = 2;
    }
    else
    {
        normalizedPoverty = 1;
    }
}

void Counties::setNormalizedEducation(float val)
{
    if(val == -1)
    {
        normalizedEducation = 0;
    }
    else if(val< 14)
    {
        normalizedEducation = 17;
    }
    else if(val< 16)
    {
        normalizedEducation = 16;
    }
    else if(val< 18)
    {
        normalizedEducation = 15;
    }
    else if (val < 20)
    {
        normalizedEducation = 14;
    }
    else if (val < 22)
    {
        normalizedEducation = 13;
    }
    else if (val < 24)
    {
        normalizedEducation = 12;
    }
    else if (val < 26)
    {
        normalizedEducation = 11;
    }
    else if (val < 28)
    {
        normalizedEducation = 10;
    }
    else if (val < 30)
    {
        normalizedEducation = 9;
    }
    else if (val < 32)
    {
        normalizedEducation = 8;
    }
    else if(val < 34)
    {
        normalizedEducation = 7;
    }
    else if(val < 36)
    {
        normalizedEducation = 6;
    }
    else if(val < 38)
    {
        normalizedEducation = 5;
    }
    else if(val < 40)
    {
        normalizedEducation = 4;
    }
    else if(val < 42)
    {
        normalizedEducation = 3;
    }
    else if(val < 44)
    {
        normalizedEducation = 2;
    }
    else
    {
        normalizedEducation = 1;
    }
}

void Counties::setNormalizedUnemployment(float val)
{
    if(val == -1)
    {
        normalizedUnemployment = 0;
    }
    else if (val < 0.5)
    {
        normalizedUnemployment = 17;
    }
    else if(val < 1)
    {
        normalizedUnemployment = 16;
    }
    else if(val < 1.5)
    {
        normalizedUnemployment = 15 ;
    }
    else if(val < 2)
    {
        normalizedUnemployment = 14;
    }
    else if(val < 2.5)
    {
        normalizedUnemployment = 13;
    }
    else if(val < 3)
    {
        normalizedUnemployment = 12;
    }
    else if(val < 3.5)
    {
        normalizedUnemployment = 11;
    }
    else if(val < 4)
    {
        normalizedUnemployment = 10;
    }
    else if(val < 4.5)
    {
        normalizedUnemployment = 9;
    }
    else if(val < 5)
    {
        normalizedUnemployment = 8;
    }
    else if(val < 5.5)
    {
        normalizedUnemployment = 7;
    }
    else if(val < 6)
    {
        normalizedUnemployment = 6;
    }
    else if(val < 6.5)
    {
        normalizedUnemployment = 5;
    }
    else if(val < 7)
    {
        normalizedUnemployment = 4;
    }
    else if(val < 7.5)
    {
        normalizedUnemployment = 3;
    }
    else if(val < 8)
    {
        normalizedUnemployment = 2;
    }
    else
    {
        normalizedUnemployment = 1;
    }
}

void Counties::setNormalizedIncome(float val)
{
    if(val == -1)
    {
        normalizedIncome = 0;
    }
    else if (val > 140000)
    {
        normalizedIncome = 17;
    }
    else if(val > 135000)
    {
        normalizedIncome = 16;
    }
    else if(val > 130000)
    {
        normalizedIncome = 15;
    }
    else if(val > 125000)
    {
        normalizedIncome = 14;
    }
    else if(val > 120000)
    {
        normalizedIncome = 13;
    }
    else if(val > 115000)
    {
        normalizedIncome = 12;
    }
    else if(val > 110000)
    {
        normalizedIncome = 11;
    }
    else if(val > 105000)
    {
        normalizedIncome = 10;
    }
    else if(val > 100000)
    {
        normalizedIncome = 9;
    }
    else if(val > 95000)
    {
        normalizedIncome = 8;
    }
    else if(val > 90000)
    {
        normalizedIncome = 7;
    }
    else if(val > 80000)
    {
        normalizedIncome = 6;
    }
    else if(val > 70000)
    {
        normalizedIncome = 5;
    }
    else if(val > 60000)
    {
        normalizedIncome = 4;
    }
    else if(val > 50000)
    {
        normalizedIncome = 3;
    }
    else if(val > 40000)
    {
        normalizedIncome = 2;
    }
    else
    {
        normalizedIncome = 1;
    }
}

