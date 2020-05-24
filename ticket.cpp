#include "ticket.h"
#include "hall.h"
#include <ctime>
Ticket::Ticket()
{
    ID ="";
}
Ticket::Ticket(int row,int seat, const Date& date,int hallN)
{
    ID = "";

    ID+=std::to_string(hallN);
    ID+=RandomChar();
    if(singleNum(row)){ID+='0';}
    ID+=std::to_string(row);
    ID+=RandomChar();
    if(singleNum(seat)){ID+='0';}
    ID+=std::to_string(seat);
    ID+=std::to_string(date.getYear());
    if(singleNum(date.getMonth())){ID+='0';}
    ID+=std::to_string(date.getMonth());
    if(singleNum(date.getDay())){ID+='0';}
    ID+=std::to_string(date.getDay());
    ID+=RandomChar();
}
char Ticket::RandomChar()
{
    char random;
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
            int r = (rand() % 26) +1;
            random = a[r-1];
    return random;
}
bool Ticket::singleNum(int number)const
{
    if(number <10)
    {
        return true;
    }
    return false;
}
void Ticket::displayTicket()const
{
    std::cout <<ID;
}
std::string Ticket::getID()
{
    return ID;
}
void Ticket::write(std::ostream& f)
{
    f.write(ID.c_str(), ID.length()+1);
}
void Ticket::read(std::istream& f)
{
    std::getline(f, ID, '\0');
}