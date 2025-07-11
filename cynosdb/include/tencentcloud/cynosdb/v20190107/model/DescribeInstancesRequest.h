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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/QueryFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为 20，取值范围为(0,100]
                     * @return Limit 返回数量，默认为 20，取值范围为(0,100]
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，取值范围为(0,100]
                     * @param _limit 返回数量，默认为 20，取值范围为(0,100]
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取记录偏移量，默认值为0
                     * @return Offset 记录偏移量，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量，默认值为0
                     * @param _offset 记录偏移量，默认值为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序字段，取值范围：
<li> CREATETIME：创建时间</li>
<li> PERIODENDTIME：过期时间</li>
                     * @return OrderBy 排序字段，取值范围：
<li> CREATETIME：创建时间</li>
<li> PERIODENDTIME：过期时间</li>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，取值范围：
<li> CREATETIME：创建时间</li>
<li> PERIODENDTIME：过期时间</li>
                     * @param _orderBy 排序字段，取值范围：
<li> CREATETIME：创建时间</li>
<li> PERIODENDTIME：过期时间</li>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型，取值范围：
<li> ASC：升序排序 </li>
<li> DESC：降序排序 </li>
                     * @return OrderByType 排序类型，取值范围：
<li> ASC：升序排序 </li>
<li> DESC：降序排序 </li>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型，取值范围：
<li> ASC：升序排序 </li>
<li> DESC：降序排序 </li>
                     * @param _orderByType 排序类型，取值范围：
<li> ASC：升序排序 </li>
<li> DESC：降序排序 </li>
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取搜索条件，若存在多个Filter时，Filter间的关系为逻辑与（AND）关系。
                     * @return Filters 搜索条件，若存在多个Filter时，Filter间的关系为逻辑与（AND）关系。
                     * 
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置搜索条件，若存在多个Filter时，Filter间的关系为逻辑与（AND）关系。
                     * @param _filters 搜索条件，若存在多个Filter时，Filter间的关系为逻辑与（AND）关系。
                     * 
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取引擎类型：目前支持“MYSQL”
                     * @return DbType 引擎类型：目前支持“MYSQL”
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置引擎类型：目前支持“MYSQL”
                     * @param _dbType 引擎类型：目前支持“MYSQL”
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取实例状态, 可选值:
creating 创建中
running 运行中
isolating 隔离中
isolated 已隔离
activating 恢复中
offlining 下线中
offlined 已下线
                     * @return Status 实例状态, 可选值:
creating 创建中
running 运行中
isolating 隔离中
isolated 已隔离
activating 恢复中
offlining 下线中
offlined 已下线
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态, 可选值:
creating 创建中
running 运行中
isolating 隔离中
isolated 已隔离
activating 恢复中
offlining 下线中
offlined 已下线
                     * @param _status 实例状态, 可选值:
creating 创建中
running 运行中
isolating 隔离中
isolated 已隔离
activating 恢复中
offlining 下线中
offlined 已下线
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例id列表
                     * @return InstanceIds 实例id列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例id列表
                     * @param _instanceIds 实例id列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取集群类型，取值范围<li> CYNOSDB：事务集群 </li><li> LIBRADB：分析集群 </li><li> ALL：全部 </li>，缺省为 ALL
                     * @return ClusterType 集群类型，取值范围<li> CYNOSDB：事务集群 </li><li> LIBRADB：分析集群 </li><li> ALL：全部 </li>，缺省为 ALL
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，取值范围<li> CYNOSDB：事务集群 </li><li> LIBRADB：分析集群 </li><li> ALL：全部 </li>，缺省为 ALL
                     * @param _clusterType 集群类型，取值范围<li> CYNOSDB：事务集群 </li><li> LIBRADB：分析集群 </li><li> ALL：全部 </li>，缺省为 ALL
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为 20，取值范围为(0,100]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 记录偏移量，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，取值范围：
<li> CREATETIME：创建时间</li>
<li> PERIODENDTIME：过期时间</li>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型，取值范围：
<li> ASC：升序排序 </li>
<li> DESC：降序排序 </li>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 搜索条件，若存在多个Filter时，Filter间的关系为逻辑与（AND）关系。
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 引擎类型：目前支持“MYSQL”
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 实例状态, 可选值:
creating 创建中
running 运行中
isolating 隔离中
isolated 已隔离
activating 恢复中
offlining 下线中
offlined 已下线
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例id列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 集群类型，取值范围<li> CYNOSDB：事务集群 </li><li> LIBRADB：分析集群 </li><li> ALL：全部 </li>，缺省为 ALL
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESREQUEST_H_
