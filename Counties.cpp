#include "Counties.h"
using namespace std;

float Counties::getPoverty() { return povertyPercent;}
float Counties::getUnemployment() { return unemploymentRate;}
float Counties::getEducation() { return HSDiplomaPercent};
float Counties::getIncome() { return medianHouseholdIncome};
string Counties::getName() { return countyName};
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
