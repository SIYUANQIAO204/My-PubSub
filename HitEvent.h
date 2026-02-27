#include"Event.h"
#include<vector>
#pragma once
namespace event
{
    class HitEvent : public Event
    {
    public:
        int hitTragetsIds; // Vector to store hit targets
        int hitterId;
        int damageAmount;
        HitEvent(int hitTragetsIds, int hitterId, int damageAmount)
            : hitTragetsIds(hitTragetsIds), hitterId(hitterId), damageAmount(damageAmount) {}
        ~HitEvent() = default; // Default destructor
        
    };
}