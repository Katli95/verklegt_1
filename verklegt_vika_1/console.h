#ifndef CONSOLE_H
#define CONSOLE_H

#include "scientist.h"
#include "service.h"

#include <vector>
#include <string>

using namespace std;

class Console
{
public:
    Console();
    virtual ~Console();
/**************************************************
                    Keyrsluföll
**************************************************/
    void run();                     //Keyrir forrit í gang
    void edit();                    //Notandi sendur í edit glugga
    void search();                  //Notandi sendur í leitar vél
    void viewDisplay();             //Notandi sendur i sorting_menu
    string continueFunction();      //Spyr hvort eigi að endurtaka aðgerð og geymir valið y/n
    void quit();                    //Hættir í forriti
    void callUser ();               //Notandi getur loggað sig inn eða skráð nýjan user

/**************************************************
                    Opnunarföll
**************************************************/
    void welcome();         //Kallar á upphafsmynd
    void toContinue();      //Notandi þarf að ýta á ENTER til að halda áfram

/**************************************************
                   Valmyndarföll
**************************************************/
    void viewOrInsert();        //Birta aðal valmynd
    void loginMenu();           //Login menu
    string choice();            //Geyma valmöguleika
    void choiceMade();          //Kalla á framkvæmd eftir vali notanda
    void printChangeDelete();   //Bjóða uppá að eiga við lista
    void quitMenu();            // skjár segjir bless þegar þú hættir í forriti

/**************************************************
                   Sorting föll
**************************************************/
    void sorting_menu();        //Birta valmynd yfir möguleika til að raða lista
    string stringChoice();      //Geyma val notanda yfir hvernig hann vildi raða listanum
    void sorting(string str);   //Birta raðaðann lista

private:
/**************************************************
                   Meðlimabreytur
**************************************************/
    ErrorHandling throwError;   //Sendir forrit í villu tékk
    string user;                //Nafn fyrir user
    Service scientistService;   //Heldur utan um upplýsingar frá gagnagrunni fyrir service hlutan
/**************************************************
               Hjálparföll við edit
**************************************************/
    int findIndexToEdit(string oldName);                                                                            //Finnur nr. á vísindamann sem á að edit-a
    void printPushBackMenu();                                                                                       //Byrtir valmynd þegar nýr vísindamaður er settur í gagnagrunn
    void printEditMenu();                                                                                           //Birtir valmynd þegar edit-a á vísindamann
    void pushBackScientist();                                                                                       //Býr til nýjan vísindamann í gagnagrunninn og ýtir honum aftast í listann
    void createScientist(string& name, string& sex, int& YOB, int& YOD, string& nationality, string& furtherInfo);  //Býr til nýjan vísindamann
    void readName(string& name);                                                                                    //Tekur inn nafn fyrir vísindamann
    void readSex(string& sex);                                                                                      //Tekur inn kyn fyrir vísindamann
    void readFurtherInfo(string& furtherInfo);                                                                      //Tekur inn auka upplýsingar fyrir vísindamann
    void readNationality(string& nationality);                                                                      //Tekur inn þjóðerni fyrir vísindamann
    void readYears(int& YOB, int& YOD);                                                                             //Tekur inn fæðingar/dánar ár fyrir vísindamann
    void readBirthYear(int& YOB, bool& cont);                                                                       //Athugar fæðingar ár á vísindamanni
    void readDeathYear(int& YOD, bool& cont);                                                                       //Athugar dánar ár á vísindamanni

/**************************************************
              Hjálparföll við search
**************************************************/
    void printSearchMenu();                         //Byrtir leitar valmynd
    void changeOrDelete(vector<int> indexes);       //Tekur við ákvörðun frá notanda um edit

/**************************************************
                 Birta töflu
**************************************************/
    void printTable();                              //Byrtir töflu af vísindamönnum
    void printTable(vector<int> indexesToPrint);    //Byrtir töflu af vísindamönnum fyrir edit
};

#endif // CONSOLE_H
