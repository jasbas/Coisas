
#ifndef BUFFERMARKER_H_INCLUDED
#define BUFFERMARKER_H_INCLUDED

#include "AudioBufferSamples.h"
#include "AudioSample.h"

#define DEFAULT_LENGTH 10000

namespace ofxPm
{

	class AudioBufferSamplesMarker
	{
	
	public:
	
		AudioBufferSamplesMarker(unsigned int index,AudioBufferSamples &buffer);
		AudioBufferSamplesMarker();
		~AudioBufferSamplesMarker();

		void					setup(unsigned int _index, AudioBufferSamples & buffer);

		void					setIndex(unsigned int _index);
		void					draw();
		unsigned int			getIndex();
		unsigned int			getMin();
		unsigned int			getMax();
		unsigned int			getLength();

	protected:

		AudioBufferSamples*		aBuffer;		
		unsigned int			index;
		unsigned int			indexMin;
		unsigned int			indexMax;
		unsigned int			length;
		
	};

}
#endif 