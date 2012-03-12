/*
 * AudioFrame.h
 *
 *  Created on: 09-oct-2008
 *      Author: arturo castro
 */

#include "AudioGrabber.h"

namespace ofxPm{
AudioGrabber::AudioGrabber() {
	//ofEvents::addAudioReceivedListener(this);

}
	AudioGrabber::~AudioGrabber(){
	}
	void AudioGrabber::audioReceived(float * input, int bufferSize, int nChannels){
		AudioFrame * frame = new AudioFrame(input,bufferSize,nChannels);
		newFrameEvent.notify(this,*frame);
		frame->release();
		//delete frame;
	}

	float AudioGrabber::getFps(){
		return fps;
	}
	
	void AudioGrabber::setFps(float f){
		fps = f;
	}
	
	
	
}
