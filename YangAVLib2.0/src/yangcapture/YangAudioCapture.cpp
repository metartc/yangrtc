#include "stdlib.h"
#include <stdio.h>
#include <yangcapture/YangAudioCapture.h>
#include "yangutil/sys/YangLog.h"
#include "memory.h"
#include "malloc.h"



YangAudioCapture::YangAudioCapture()
{

	aIndex=0;
	m_isStart=0;
	m_para=NULL;
	//m_resample=NULL;

}

YangAudioCapture::~YangAudioCapture()
{

	m_para=NULL;


}


void YangAudioCapture::run(){
	m_isStart=1;
	startLoop();
	m_isStart=0;
}
void YangAudioCapture::stop(){
	stopLoop();
	//m_isStart=0;
}

