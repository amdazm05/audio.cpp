#ifndef __AUDIOCPP
#define __AUDIOCPP
#include <stdint.h>
#include "utils.h"

class AudioSignal
{
    private:
        struct BitDepth
        {
            
        };

        struct Sample
        {
            //This can be specified by the USER on what kind of signal representation is required
            BitDepth * samples;   
        };
    public:
        
};

#endif