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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_INSTALLANDROIDINSTANCESAPPWITHURLRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_INSTALLANDROIDINSTANCESAPPWITHURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceTask.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * InstallAndroidInstancesAppWithURL返回参数结构体
                */
                class InstallAndroidInstancesAppWithURLResponse : public AbstractModel
                {
                public:
                    InstallAndroidInstancesAppWithURLResponse();
                    ~InstallAndroidInstancesAppWithURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSet 任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AndroidInstanceTask> GetTaskSet() const;

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     * 
                     */
                    bool TaskSetHasBeenSet() const;

                private:

                    /**
                     * 任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AndroidInstanceTask> m_taskSet;
                    bool m_taskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_INSTALLANDROIDINSTANCESAPPWITHURLRESPONSE_H_
