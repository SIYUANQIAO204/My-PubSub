#include<iostream>
#include"Publisher.h"

int main()
{
    auto eB = std::make_shared<event::EventBus>(); // Create an event bus;
    eB->Init(); // Initialize the event bus
    eB->subscribe(std::make_shared<Subscriber::Subscriber>(2)); // Subscribe a subscriber with ID 1 to the event bus
    auto pub = std::make_shared<Publisher::Publisher>(1, eB); // Create a publisher with ID 1 and the event bus
    pub->hitTarget(1, 100); // Publisher hits target with ID 1 and damage amount 100
    int z;
    std::cin >> z;
    return 0;
}
