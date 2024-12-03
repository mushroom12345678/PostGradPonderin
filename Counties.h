#ifndef COUNTIES_H
#define COUNTIES_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Counties {
public:
    Counties() = default;

    void setFIPSCode(int fips);
    void setState(string stateName);
    void setCountyName(string name);
    void setPovertyPercent(float poverty);
    void setHSDiplomaPercent(float hsDiploma);
    void setUnemploymentRate(float unemployment);
    void setMedianHouseholdIncome(float income);
    void setLatitude(float lat);
    void setLongitude(float lon);
    void setPopulation(float pop);
    void setAgeUnder5Percent(float under5);
    void setAgeUnder18Percent(float under18);
    void setAgeOver65Percent(float over65);
    void setMedianAge(float median);
    void setFemalePercent(float female);
    void setWhitePercent(float white);
    void setBlackPercent(float black);
    void setNativePercent(float nativePercent);
    void setPacificIslandPercent(float pacificIsland);
    void setSpeakEnglishOnlyPercent(float englishOnly);
    void setForeignLanguageSpokenAtHomePercent(float foreignLanguage);
    void setVeteranPercent(float veterans);
    void setUrbanInfluenceCode2003(float code);
    void setUrbanInfluenceCode2013(float code);
    void setRuralUrbanContinuumCode2013(float code);
    void setRuralUrbanContinuumCode2023(float code);
    void setLessThanHSDiploma1970(float value);
    void setHSDiplomaOnly1970(float value);
    void setSomeCollege1970(float value);
    void setFourYearsCollege1970(float value);
    void setScore(float value);
    void print();
    string getName();
    string getState();
    float getPoverty();
    float getUnemployment();
    float getEducation();
    float getIncome();
    void setNormalizedPoverty(float val);
    void setNormalizedUnemployment(float val);
    void setNormalizedEducation(float val);
    void setNormalizedIncome(float val);
    float getNormalizedPoverty();
    float getNormalizedUnemployment();
    float getNormalizedEducation();
    float getNormalizedIncome();
    float getLongitude();
    float getLatitude();
    float getUnder5();
    float getUnder18();
    float getOver65();
    float getMedianAge();
    float getFemale();
    float getWhite();
    float getBlack();
    float getNative();
    float getPacificIsland();
    float getEnglish();
    float getForeign();
    float getVeteran();

    void setScores(vector<Counties>& counties, string outputUnemployment, string outputIncome, string outputEducation, string outputPoverty);
    float getScore();

private:
    int FIPSCode = 0;
    string state;
    string countyName;
    float povertyPercent = -1.0f;
    float HSDiplomaPercent = -1.0f;
    float unemploymentRate = -1.0f;
    float medianHouseholdIncome = -1.0f;
    float latitude = -1.0f;
    float longitude = -1.0f;
    float population = -1.0f;
    float ageUnder5Percent = -1.0f;
    float ageUnder18Percent = -1.0f;
    float ageOver65Percent = -1.0f;
    float medianAge = -1.0f;
    float femalePercent = -1.0f;
    float whitePercent = -1.0f;
    float blackPercent = -1.0f;
    float nativePercent = -1.0f;
    float pacificIslandPercent = -1.0f;
    float speakEnglishOnlyPercent = -1.0f;
    float foreignLanguageSpokenAtHomePercent = -1.0f;
    float veteranPercent = -1.0f;
    float urbanInfluenceCode2003 = -1.0f;
    float urbanInfluenceCode2013 = -1.0f;
    float ruralUrbanContinuumCode2013 = -1.0f;
    float ruralUrbanContinuumCode2023 = -1.0f;
    float lessThanHSDiploma1970 = -1.0f;
    float HSDiplomaOnly1970 = -1.0f;
    float someCollege1970 = -1.0f;
    float fourYearsCollege1970 = -1.0f;
    float score = -1.0f;
    float normalizedPoverty;
    float normalizedUnemployment;
    float normalizedEducation;
    float normalizedIncome;
};

#endif // COUNTIES_H
