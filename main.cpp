#include "Counties.h"
#include "Window.h"
#include "HeapSort.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
#include <iostream>

vector<Counties> parseCSV(string filename) {
    vector<Counties> countiesList;
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "File can't be opened. Check filename/location " << filename << endl;
        return countiesList;
    }

    string line;
    getline(file, line);

    while (getline(file, line)) {
        Counties county;
        vector<string> fields;
        stringstream ss(line);
        string token;

        while (getline(ss, token, ',')) {
            fields.push_back(token);
        }

        county.setFIPSCode(fields.size() > 0 and !fields[0].empty() ? stoi(fields[0]) : -1);
        county.setState(fields.size() > 1 ? fields[1] : "");
        county.setCountyName(fields.size() > 2 ? fields[2] : "");
        county.setPovertyPercent(fields.size() > 3 and !fields[3].empty() ? stof(fields[3]) : -1.0f);
        county.setHSDiplomaPercent(fields.size() > 4 and !fields[4].empty() ? stof(fields[4]) : -1.0f);
        county.setUnemploymentRate(fields.size() > 5 and !fields[5].empty() ? stof(fields[5]) : -1.0f);
        county.setMedianHouseholdIncome(fields.size() > 6 and !fields[6].empty() ? stof(fields[6]) : -1.0f);
        county.setLatitude(fields.size() > 7 and !fields[7].empty() ? stof(fields[7]) : -1.0f);
        county.setLongitude(fields.size() > 8 and !fields[8].empty() ? stof(fields[8]) : -1.0f);
        county.setPopulation(fields.size() > 9 and !fields[9].empty() ? stof(fields[9]) : -1.0f);
        county.setAgeUnder5Percent(fields.size() > 10 and !fields[10].empty() ? stof(fields[10]) : -1.0f);
        county.setAgeUnder18Percent(fields.size() > 11 and !fields[11].empty() ? stof(fields[11]) : -1.0f);
        county.setAgeOver65Percent(fields.size() > 12 and !fields[12].empty() ? stof(fields[12]) : -1.0f);
        county.setMedianAge(fields.size() > 13 and !fields[13].empty() ? stof(fields[13]) : -1.0f);
        county.setFemalePercent(fields.size() > 14 and !fields[14].empty() ? stof(fields[14]) : -1.0f);
        county.setWhitePercent(fields.size() > 15 and !fields[15].empty() ? stof(fields[15]) : -1.0f);
        county.setBlackPercent(fields.size() > 16 and !fields[16].empty() ? stof(fields[16]) : -1.0f);
        county.setNativePercent(fields.size() > 17 and !fields[17].empty() ? stof(fields[17]) : -1.0f);
        county.setPacificIslandPercent(fields.size() > 18 and !fields[18].empty() ? stof(fields[18]) : -1.0f);
        county.setSpeakEnglishOnlyPercent(fields.size() > 19 and !fields[19].empty() ? stof(fields[19]) : -1.0f);
        county.setForeignLanguageSpokenAtHomePercent(fields.size() > 20 and !fields[20].empty() ? stof(fields[20]) : -1.0f);
        county.setVeteranPercent(fields.size() > 21 and !fields[21].empty() ? stof(fields[21]) : -1.0f);
        county.setUrbanInfluenceCode2003(fields.size() > 22 and !fields[22].empty() ? stof(fields[22]) : -1.0f);
        county.setUrbanInfluenceCode2013(fields.size() > 23 and !fields[23].empty() ? stof(fields[23]) : -1.0f);
        county.setRuralUrbanContinuumCode2013(fields.size() > 24 and !fields[24].empty() ? stof(fields[24]) : -1.0f);
        county.setRuralUrbanContinuumCode2023(fields.size() > 25 and !fields[25].empty() ? stof(fields[25]) : -1.0f);
        county.setLessThanHSDiploma1970(fields.size() > 26 and !fields[26].empty() ? stof(fields[26]) : -1.0f);
        county.setHSDiplomaOnly1970(fields.size() > 27 and !fields[27].empty() ? stof(fields[27]) : -1.0f);
        county.setSomeCollege1970(fields.size() > 28 and !fields[28].empty() ? stof(fields[28]) : -1.0f);
        county.setFourYearsCollege1970(fields.size() > 29 and !fields[29].empty() ? stof(fields[29]) : -1.0f);

        countiesList.push_back(county);
    }

    file.close();
    return countiesList;
}

int main() {
    vector<Counties> counties = parseCSV("resources/DSAProj3Data.csv"); //parse data
    Window screen("post grad ponderin", 800, 800); //makes screen


    HeapSort heapsortobj; //creates heapsort object

    //in between each sort we need to update the scores of the counties
    heapsortobj.heapSort(counties, counties.size(), HeapSort::poverty);
    heapsortobj.heapSort(counties, counties.size(), HeapSort::unemployment);
    heapsortobj.heapSort(counties, counties.size(), HeapSort::education);
    heapsortobj.heapSort(counties, counties.size(), HeapSort::medianIncome);

//    for(auto county: counties){
//        cout << county.getPoverty() << endl;
//    }

    screen.run(); // runs window program

    return 0;
}



map<string, float> getScores(vector<Counties> counties, string outputUnemployment, string outputIncome, string outputEducation, string outputPoverty)
{
    map<string, float> result;
    for(int i = 0; i < counties.size(); i++)
    {
        float povVal = (counties[i].getPoverty()) * stoi(outputPoverty);
        float unempVal = counties[i].getUnemployment() * stoi(outputUnemployment);
        float eduVal = counties[i].getEducation() * stoi(outputEducation);
        float incVal = (counties[i].getIncome() / 10000)* stoi(outputIncome); // regulates number cause unemployment is in hundred thousands
        float score = povVal + unempVal + eduVal + incVal;
        string name = counties[i].getName();
        result[name] = score;
    }
    return result;
}
