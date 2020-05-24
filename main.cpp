#include "program.h"
int main()
{
    srand(time(NULL));    
    Program Ticket;
    std::cout <<"Type 'help' to see available commands\n";
    Ticket.main();
    return 0;
}






























Hall A(1,10,10);
//     Hall B(2,20,20);
//     Hall C(3,30,20);
//     Hall D(4,40,40);
//     Date a(0,0,0);
//     std::vector<Event> events;
//     std::vector<Hall> halls = {A,B,C,D};
//     std::string addEvent("addevent 2020-02-29 3 Ivan Selqmsuza");
//     std::string firstWord = Extract(addEvent,' ');
//     if(firstWord == "addevent")
//     {
//         Event tmp;
//         Cut(addEvent,' ');
//         std::string date = Extract(addEvent,' ');
//         if(!isDateValid(date))
//         {
//             std::cout <<"Wrong date!\n";
//             return;
//         }
//         //From string to date
//         //transformDate(date,a);
//         Cut(addEvent,' ');
//         std::string hall = Extract(addEvent,' ');
//         //Is hall vaid, tmp.hall = hall;
// /////////////////////////////////////////////////////////////////
//         Cut(addEvent,' ');
//         std::string name = addEvent;
//     }
//     Event c(a,A,"Gospodin Sudq");
//     c.date.displayDate();
//     std::cout <<std::endl;
//     c.ticket.displayTicket(); // ticket-a raboti i se inicializira pri suzdavaneto na event (ama se suzdava ot hall, a trqbva da se suzdava ot date);