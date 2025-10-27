#ifndef JOURNALLOG_H
#define JOURNALLOG_H

#include <string>

class JournalLog {
public:
    static void logEvent(const std::string& message);
};

#endif
