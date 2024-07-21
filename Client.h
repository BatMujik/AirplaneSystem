//
// Created by Thomas on 20.07.2024.
//

#ifndef AIRPLANESYSTEM_CLIENT_H
#define AIRPLANESYSTEM_CLIENT_H

#include <string>
#include "Route.h"

class Client {
    private:
        unsigned int m_client_id;
        std::string m_fullname;
        std::string m_gmail;
        double m_balance;
        static unsigned int s_client_next_id;
    public:
        Client(const std::string &fullname, const std::string &gmail, double balance);
        ~Client();

        unsigned int getId() const;
        std::string getName() const;
        std::string getEmail() const;
        double getBalance() const;

        friend std::ostream& operator<<(std::ostream& os, const Client& client);
};

#endif //AIRPLANESYSTEM_CLIENT_H
