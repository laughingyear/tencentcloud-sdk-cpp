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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBATCHORGANIZATIONREGISTRATIONTASKSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBATCHORGANIZATIONREGISTRATIONTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/BatchOrganizationRegistrationTasksDetails.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeBatchOrganizationRegistrationTasks返回参数结构体
                */
                class DescribeBatchOrganizationRegistrationTasksResponse : public AbstractModel
                {
                public:
                    DescribeBatchOrganizationRegistrationTasksResponse();
                    ~DescribeBatchOrganizationRegistrationTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业批量任务状态明细
                     * @return Details 企业批量任务状态明细
                     * 
                     */
                    std::vector<BatchOrganizationRegistrationTasksDetails> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 企业批量任务状态明细
                     */
                    std::vector<BatchOrganizationRegistrationTasksDetails> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBATCHORGANIZATIONREGISTRATIONTASKSRESPONSE_H_
