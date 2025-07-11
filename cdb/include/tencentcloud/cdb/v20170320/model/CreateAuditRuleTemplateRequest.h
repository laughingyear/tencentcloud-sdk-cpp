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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITRULETEMPLATEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITRULETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RuleFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateAuditRuleTemplate请求参数结构体
                */
                class CreateAuditRuleTemplateRequest : public AbstractModel
                {
                public:
                    CreateAuditRuleTemplateRequest();
                    ~CreateAuditRuleTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审计规则。
                     * @return RuleFilters 审计规则。
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置审计规则。
                     * @param _ruleFilters 审计规则。
                     * 
                     */
                    void SetRuleFilters(const std::vector<RuleFilters>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     * 
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取规则模板名称。最多支持输入30个字符。
                     * @return RuleTemplateName 规则模板名称。最多支持输入30个字符。
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置规则模板名称。最多支持输入30个字符。
                     * @param _ruleTemplateName 规则模板名称。最多支持输入30个字符。
                     * 
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     * 
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取规则模板描述。最多支持输入200个字符。
                     * @return Description 规则模板描述。最多支持输入200个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则模板描述。最多支持输入200个字符。
                     * @param _description 规则模板描述。最多支持输入200个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取告警等级。1 - 低风险，2 - 中风险，3 - 高风险。默认值为1。
                     * @return AlarmLevel 告警等级。1 - 低风险，2 - 中风险，3 - 高风险。默认值为1。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警等级。1 - 低风险，2 - 中风险，3 - 高风险。默认值为1。
                     * @param _alarmLevel 告警等级。1 - 低风险，2 - 中风险，3 - 高风险。默认值为1。
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警策略。0 - 不告警，1 - 告警。默认值为0。
                     * @return AlarmPolicy 告警策略。0 - 不告警，1 - 告警。默认值为0。
                     * 
                     */
                    uint64_t GetAlarmPolicy() const;

                    /**
                     * 设置告警策略。0 - 不告警，1 - 告警。默认值为0。
                     * @param _alarmPolicy 告警策略。0 - 不告警，1 - 告警。默认值为0。
                     * 
                     */
                    void SetAlarmPolicy(const uint64_t& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                private:

                    /**
                     * 审计规则。
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * 规则模板名称。最多支持输入30个字符。
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * 规则模板描述。最多支持输入200个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 告警等级。1 - 低风险，2 - 中风险，3 - 高风险。默认值为1。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警策略。0 - 不告警，1 - 告警。默认值为0。
                     */
                    uint64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITRULETEMPLATEREQUEST_H_
