#include <WinSock2.h>
#include <mysql.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
struct connection_details
{
    const char* server, * user, * password, * database;
};
struct wiersz {

    int ID;
    int intwynik;
    string wynik;
    string data;
    string nazwa;
    
};



MYSQL* mysql_connection_setup(struct connection_details mysql_details);
MYSQL_RES* mysql_perform_query(MYSQL* connection, const char* sql_query);
class Top10
{
public:
//    vector<wiersz> wiersze;
    struct connection_details mysqlD;
    wiersz wiersze[11];
    Top10();
    MYSQL* con;	// the connection
    MYSQL_RES* res;	// the results
    MYSQL_ROW row;	// the results rows (array)
    void reset();
    bool dodajRekord(int wynik, string nazwa);
    
};

