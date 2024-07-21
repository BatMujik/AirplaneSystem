#include <iostream>
#include "Route.h"
#include "Client.h"
#include "./bat_lib/DataStructers.h"

LinkedList<Route> routeList;
LinkedList<Client> clientList;

void createAndAddRoute(const std::string& source, const std::string& destination, int available_seats) {
    Route* newRoute = new Route(source, destination, available_seats);
    routeList.add(newRoute);
}

void createAndAddClient(const std::string& fullname, const std::string& gmail , double balance) {
    Client* newClient = new Client(fullname, gmail, balance);
    clientList.add(newClient);
}

int main() {
    try {
        std::string fullname;
        std::string gmail;
        double balance;

        std::cout << "Please Enter your Fullname: ";
        std::getline(std::cin, fullname);
        std::cout << "Please Enter your Gmail: ";
        std::getline(std::cin, gmail);
        std::cout << "Please Enter your Balance: ";
        std::cin >> balance;

        createAndAddClient(fullname, gmail , balance);
        clientList.print();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        createAndAddRoute("Yerevan", "Ararat", 50);
        createAndAddRoute("Moskva", "Nowhere", 40);

        routeList.print();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}