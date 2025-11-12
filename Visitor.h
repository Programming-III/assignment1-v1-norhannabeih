#ifndef VISITOR_H
#define VISITOR_H
#include <string>

class Visitor {
private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    virtual ~Visitor();
    virtual void accept(Visitor* v);

    void displayInfo() {
        cout << "visitorname: " << visitorName << endl;
        cout << "ticketsbought: " << ticketsBought << endl;

    }
};



#endif
