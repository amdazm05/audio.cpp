#ifndef __AUDIOCPP
#define __AUDIOCPP
#include "utility/utils.h"

template<class datatype>
class AudioSignal
{
    protected:
        template<class datatype>
        struct BitDepth
        {
            datatype depth;
        };

        template<class datatype>
        struct Sample
        {
            BitDepth<datatype> * samples;
        };

        Sample<datatype> audiosignal;
        int SampleRate;
        uint8_t BitsPerSample;

    public:
        virtual void load_audio(uint8_t buffer)=0;
};

//Reading : http://soundfile.sapp.org/doc/WaveFormat/
template<class datatype>
class WAVFormatSignal:AudioSignal
{
    private:

    public:
};

#endif