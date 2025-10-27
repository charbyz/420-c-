#include <JournalLog.h>
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

void JournalLog::logEvent(const string& message) {
    ofstream logFile("logs.txt", ios::app); // ouvre en mode ajout
    if (!logFile.is_open()) {
        cerr << "Erreur : impossible d'ouvrir logs.txt pour écriture.\n";
        return;
    }

    // Heure et date actuelles
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "[%Y-%m-%d %H:%M:%S]", localTime);

    // Écriture dans le fichier
    logFile << buffer << " " << message << "\n";
    logFile.close();
}
