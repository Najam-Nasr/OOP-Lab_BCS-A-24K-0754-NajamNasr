#include <iostream>
#include <string>
using namespace std;

class ServerSession{
    int* sessionID;

public:
    void setsessionID(){
        cout << "Enter session ID: ";
        cin >> *sessionID;
    }

    int getsessionID(){
        return *sessionID;
    }

    ServerSession(int ID){
        sessionID = new int(ID);
        cout << "Session ID: " << *sessionID << endl;
    }

    ~ServerSession(){
        delete sessionID;
        cout << "The session is ending and the resource is released" << endl;
    }
};

int main(){
    ServerSession s(879);
}
