#pragma once
#include "hall.h"
#include "date.h"
#include <string>
class Ticket
{
    private:
    std::string ID;
    public:
    Ticket();
    Ticket(int row,int seat, const Date& date,int hallN);
    char RandomChar();
    void displayTicket()const;
    bool singleNum(int number)const;
    std::string getID();
    void write(std::ostream& f);
    void read(std::istream& f);
};

