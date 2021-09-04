#ifndef INCLUDE_YANGPUSH_YANGPUSHHANDLE_H_
#define INCLUDE_YANGPUSH_YANGPUSHHANDLE_H_
#include <yangutil/buffer/YangVideoBuffer.h>
#include <yangutil/yangavtype.h>
#include <yangmeeting/yangmeetingtype.h>
#include <string>
class YangPushHandle {
public:
	YangPushHandle();
	virtual ~YangPushHandle();
	virtual void publish(std::string url,std::string localIp,int32_t localport)=0;
	 virtual void init()=0;
	virtual YangVideoBuffer* getPreVideoBuffer()=0;
	static YangPushHandle* createPushHandle(YangMeetingContext* pini);



};



#endif /* INCLUDE_YANGPUSH_YANGPUSHHANDLE_H_ */