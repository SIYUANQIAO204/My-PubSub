#include"Event.h"
#include"HitEvent.h"
#include"Event_bus.h"
#include<memory>
#include<utility>
#pragma once
namespace Publisher
{
    class Publisher
    {
    private:
        int publisherID;
        std::weak_ptr<event::EventBus> eventBus; // Weak pointer to avoid circular reference
    public:
        Publisher(int id, std::weak_ptr<event::EventBus> bus) : publisherID(id), eventBus(bus) {}
        ~Publisher() = default;
        void hitTarget(int targetId, int damageAmount)
        {
            if (auto bus = eventBus.lock()) // Check if the event bus is still valid
            {
                auto hitEvent = std::make_shared<event::HitEvent>(targetId, publisherID, damageAmount); // Create a new hit event
                bus->publish(hitEvent); // Publish the hit event to the event bus
            }
        }
    };
}