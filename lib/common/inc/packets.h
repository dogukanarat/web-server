#ifndef _COMMON_COMMUNICATION_H
#define _COMMON_COMMUNICATION_H

#include "stdint.h"
#include "frame.h"
#include "packet.h"
#include "consts.h"

namespace Packets
{
    typedef float  float32_t;
    typedef double float64_t;

    class Periodic : public Needmon::Packet
    {
        public:
        Periodic();
        ~Periodic();
        
        struct DataStruct
        {
            uint32_t  data1;
            uint16_t  data2;
            float32_t data3;
            float64_t data4; 
        } Data;

        virtual void Encode(Needmon::Frame &frame);
        virtual void Decode(Needmon::Frame &frame);
    };

}

#endif