#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H

#include <string>

using namespace std;

class Postilaatikko
{
public:
    Postilaatikko(string nimi);
    ~Postilaatikko();

    void lisaaPosti(short lisa);
    void otaPosti(short maara);
    string kysyOsoite(void) const;

    // static jäsenfunktio
    static void asetaOsoite(string os);

    // Avoin (inline) jäsenfunktio
    string kysyNimi() {
        return nimi;
    }

    // Avoin (inline) jäsenfunktio
    int kysyMaara() {
        return maara;
    }

private:
    int maara;
    string nimi;

    // static jäsenmuuttuja
    static string osoite;
};

#endif // POSTILAATIKKO_H
