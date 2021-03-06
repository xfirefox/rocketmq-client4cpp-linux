/**
* Copyright (C) 2013 kangliqiang ,kangliq@163.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef __RMQ_SENDCALLBACK_H__
#define __RMQ_SENDCALLBACK_H__

#include "SendResult.h"
#include "RocketMQClient.h"

namespace rmq
{
	class MQException;

	/**
	* 异步发送消息回调接口
	*
	*/
	class SendCallback
	{
	public:
		virtual ~SendCallback() {}
		virtual void onSuccess(SendResult& sendResult)=0;
		virtual void onException(MQException& e)=0;
	};
}

#endif
