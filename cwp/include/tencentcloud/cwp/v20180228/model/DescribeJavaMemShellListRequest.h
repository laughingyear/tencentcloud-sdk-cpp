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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEJAVAMEMSHELLLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEJAVAMEMSHELLLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeJavaMemShellList请求参数结构体
                */
                class DescribeJavaMemShellListRequest : public AbstractModel
                {
                public:
                    DescribeJavaMemShellListRequest();
                    ~DescribeJavaMemShellListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * @return Filters 过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * @param _filters 过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param _limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序，大小写无关：asc 升序，desc降序
                     * @return Order 排序，大小写无关：asc 升序，desc降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序，大小写无关：asc 升序，desc降序
                     * @param _order 排序，大小写无关：asc 升序，desc降序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序列，严格相等：最近检测时间RecentFoundTime
                     * @return By 排序列，严格相等：最近检测时间RecentFoundTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序列，严格相等：最近检测时间RecentFoundTime
                     * @param _by 排序列，严格相等：最近检测时间RecentFoundTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 过滤条件：InstanceID、IP、

MachineName主机名模糊查询, Type，Status精确匹配，CreateBeginTime，CreateEndTime时间段
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序，大小写无关：asc 升序，desc降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序列，严格相等：最近检测时间RecentFoundTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEJAVAMEMSHELLLISTREQUEST_H_
