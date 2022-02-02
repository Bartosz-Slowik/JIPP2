#include "Top10.h"
#include <iostream>

MYSQL* mysql_connection_setup(struct connection_details mysql_details) {
    MYSQL* connection = mysql_init(NULL); // mysql instance

    //connect database
    if (!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, mysql_details.database, 0, NULL, 0)) {
        cout << "Connection Error: " << mysql_error(connection) << endl;
        exit(1);
    }

    return connection;
}
MYSQL_RES* mysql_perform_query(MYSQL* connection, const char* sql_query) {
    //send query to db
    if (mysql_query(connection, sql_query)) {
        cout << " MySQL Query Error: " << mysql_error(connection) << endl;
        exit(1);
    }

    return mysql_use_result(connection);
}
Top10::Top10() {
    //struct connection_details mysqlD;
    mysqlD.server = "sql11.freemysqlhosting.net";  // where the mysql database is
    mysqlD.user = "sql11469520"; // user
    mysqlD.password = "mMBzXZP1T3"; // the password for the database
    mysqlD.database = "sql11469520";	// the databse
    //con = mysql_connection_setup(mysqlD);
    wiersz tmp = { 999,999,"1234","1234-56-78","12345678901234567890" };
    for (int i = 0; i < 10; i++) wiersze[i] = tmp;
   
    
    
}
ostream& operator << (ostream& o, const wiersz& a)
{
    o << "ID: " << a.ID << "wynik: " << a.wynik << "data: " << a.data << "nazwa: " << a.nazwa << endl;
    return o;
}
void Top10::reset() {
    con = mysql_connection_setup(mysqlD);
    res = mysql_perform_query(con, "select * from Tablica ORDER BY `wynik` ASC LIMIT 10;");
    int i = 0;

    while ((row = mysql_fetch_row(res)) != NULL) {
        
        wiersz temp;
        temp.ID = atoi(row[0]);
        temp.intwynik = atoi(row[1]);
        temp.data = row[2];
        temp.nazwa = row[3];
        temp.wynik = row[1];
        wiersze[i] = temp;
        i++;
        cout << temp;
    }
    

    // clean up the database result
   mysql_free_result(res);

     //close database connection
    mysql_close(con);

}
bool Top10::dodajRekord(int wynik, string nazwa) {

    cout << nazwa << endl;
    con = mysql_connection_setup(mysqlD);
    string tmp = "insert into `Tablica`(`wynik`,`data`,`nazwa`) values('" + to_string(wynik) + "',CURDATE(),'" + nazwa + "')";
    const char* tmp2 = tmp.c_str();
    cout << "\n"<<tmp<<endl;
    mysql_perform_query(con, tmp2);
    
    mysql_close(con);
    
    //reset();
    return true;
}
