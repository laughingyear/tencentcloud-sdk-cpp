/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATECONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATECONSUMERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * CreateConsumerGroup请求参数结构体
                */
                class CreateConsumerGroupRequest : public AbstractModel
                {
                public:
                    CreateConsumerGroupRequest();
                    ~CreateConsumerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取最大重试次数，取值范围0～1000
                     * @return MaxRetryTimes 最大重试次数，取值范围0～1000
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置最大重试次数，取值范围0～1000
                     * @param _maxRetryTimes 最大重试次数，取值范围0～1000
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取是否开启消费
                     * @return ConsumeEnable 是否开启消费
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置是否开启消费
                     * @param _consumeEnable 是否开启消费
                     * 
                     */
                    void SetConsumeEnable(const bool& _consumeEnable);

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取顺序投递：true
并发投递：false
                     * @return ConsumeMessageOrderly 顺序投递：true
并发投递：false
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置顺序投递：true
并发投递：false
                     * @param _consumeMessageOrderly 顺序投递：true
并发投递：false
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口或控制台获得。
                     * @return ConsumerGroup 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口或控制台获得。
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口或控制台获得。
                     * @param _consumerGroup 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口或控制台获得。
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取备注信息，最多 128 个字符
                     * @return Remark 备注信息，最多 128 个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，最多 128 个字符
                     * @param _remark 备注信息，最多 128 个字符
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagList 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置标签列表
                     * @param _tagList 标签列表
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 最大重试次数，取值范围0～1000
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * 顺序投递：true
并发投递：false
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口或控制台获得。
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 备注信息，最多 128 个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATECONSUMERGROUPREQUEST_H_
