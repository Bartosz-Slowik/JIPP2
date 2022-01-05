//
// Created by ASUS on 03.01.2022.
//

#ifndef JIPP2_CSVLIB_H
#define JIPP2_CSVLIB_H


using namespace std;
class CsvLib {
private:
    fstream stream;
    bool haveHeaderRow;
    vector<string> headers;
    char delimiter;

public:
    CsvLib(string path, char delimiter = ',', bool haveHeaderRow = true);

    map<string, string> getRow();
    //vector<string>
    bool hasNextRow();

    ~CsvLib();
};


#endif //JIPP2_CSV_H
