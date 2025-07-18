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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/AudioResultDetailTextResult.h>
#include <tencentcloud/vm/v20210922/model/AudioResultDetailMoanResult.h>
#include <tencentcloud/vm/v20210922/model/AudioResultDetailLanguageResult.h>
#include <tencentcloud/vm/v20210922/model/RecognitionResult.h>
#include <tencentcloud/vm/v20210922/model/SpeakerResult.h>
#include <tencentcloud/vm/v20210922/model/TravelResult.h>
#include <tencentcloud/vm/v20210922/model/LabelResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 音频输出参数
                */
                class AudioResult : public AbstractModel
                {
                public:
                    AudioResult();
                    ~AudioResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
                     * @return HitFlag 该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
                     * @param _hitFlag 该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
                     * @return Label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
                     * @param _label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * @return Suggestion 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * @param _suggestion 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
                     * @return Score 该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
                     * @param _score 该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
                     * @return Text 该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
                     * @param _text 该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
                     * @return Url 该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
                     * @param _url 该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件的时长，单位为毫秒。
                     * @return Duration 该字段用于返回音频文件的时长，单位为毫秒。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置该字段用于返回音频文件的时长，单位为毫秒。
                     * @param _duration 该字段用于返回音频文件的时长，单位为毫秒。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。
                     * @return Extra 该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。
                     * @param _extra 该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @return TextResults 该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    std::vector<AudioResultDetailTextResult> GetTextResults() const;

                    /**
                     * 设置该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @param _textResults 该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    void SetTextResults(const std::vector<AudioResultDetailTextResult>& _textResults);

                    /**
                     * 判断参数 TextResults 是否已赋值
                     * @return TextResults 是否已赋值
                     * 
                     */
                    bool TextResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * @return MoanResults 该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * 
                     */
                    std::vector<AudioResultDetailMoanResult> GetMoanResults() const;

                    /**
                     * 设置该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * @param _moanResults 该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * 
                     */
                    void SetMoanResults(const std::vector<AudioResultDetailMoanResult>& _moanResults);

                    /**
                     * 判断参数 MoanResults 是否已赋值
                     * @return MoanResults 是否已赋值
                     * 
                     */
                    bool MoanResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @return LanguageResults 该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    std::vector<AudioResultDetailLanguageResult> GetLanguageResults() const;

                    /**
                     * 设置该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @param _languageResults 该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    void SetLanguageResults(const std::vector<AudioResultDetailLanguageResult>& _languageResults);

                    /**
                     * 判断参数 LanguageResults 是否已赋值
                     * @return LanguageResults 是否已赋值
                     * 
                     */
                    bool LanguageResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回当前标签（Lable）下的二级标签。
                     * @return SubLabel 该字段用于返回当前标签（Lable）下的二级标签。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回当前标签（Lable）下的二级标签。
                     * @param _subLabel 该字段用于返回当前标签（Lable）下的二级标签。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取识别类标签结果信息列表
                     * @return RecognitionResults 识别类标签结果信息列表
                     * 
                     */
                    std::vector<RecognitionResult> GetRecognitionResults() const;

                    /**
                     * 设置识别类标签结果信息列表
                     * @param _recognitionResults 识别类标签结果信息列表
                     * 
                     */
                    void SetRecognitionResults(const std::vector<RecognitionResult>& _recognitionResults);

                    /**
                     * 判断参数 RecognitionResults 是否已赋值
                     * @return RecognitionResults 是否已赋值
                     * 
                     */
                    bool RecognitionResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件说话人检测的详细审核结果
                     * @return SpeakerResults 该字段用于返回音频文件说话人检测的详细审核结果
                     * 
                     */
                    std::vector<SpeakerResult> GetSpeakerResults() const;

                    /**
                     * 设置该字段用于返回音频文件说话人检测的详细审核结果
                     * @param _speakerResults 该字段用于返回音频文件说话人检测的详细审核结果
                     * 
                     */
                    void SetSpeakerResults(const std::vector<SpeakerResult>& _speakerResults);

                    /**
                     * 判断参数 SpeakerResults 是否已赋值
                     * @return SpeakerResults 是否已赋值
                     * 
                     */
                    bool SpeakerResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件出行检测的详细审核结果
                     * @return TravelResults 该字段用于返回音频文件出行检测的详细审核结果
                     * 
                     */
                    std::vector<TravelResult> GetTravelResults() const;

                    /**
                     * 设置该字段用于返回音频文件出行检测的详细审核结果
                     * @param _travelResults 该字段用于返回音频文件出行检测的详细审核结果
                     * 
                     */
                    void SetTravelResults(const std::vector<TravelResult>& _travelResults);

                    /**
                     * 判断参数 TravelResults 是否已赋值
                     * @return TravelResults 是否已赋值
                     * 
                     */
                    bool TravelResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件的三级标签
                     * @return SubTag 该字段用于返回音频文件的三级标签
                     * 
                     */
                    std::string GetSubTag() const;

                    /**
                     * 设置该字段用于返回音频文件的三级标签
                     * @param _subTag 该字段用于返回音频文件的三级标签
                     * 
                     */
                    void SetSubTag(const std::string& _subTag);

                    /**
                     * 判断参数 SubTag 是否已赋值
                     * @return SubTag 是否已赋值
                     * 
                     */
                    bool SubTagHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件的三级标签码
                     * @return SubTagCode 该字段用于返回音频文件的三级标签码
                     * 
                     */
                    std::string GetSubTagCode() const;

                    /**
                     * 设置该字段用于返回音频文件的三级标签码
                     * @param _subTagCode 该字段用于返回音频文件的三级标签码
                     * 
                     */
                    void SetSubTagCode(const std::string& _subTagCode);

                    /**
                     * 判断参数 SubTagCode 是否已赋值
                     * @return SubTagCode 是否已赋值
                     * 
                     */
                    bool SubTagCodeHasBeenSet() const;

                    /**
                     * 获取该字段用于返回音频文件歌曲识别的详细审核结果
                     * @return LabelResults 该字段用于返回音频文件歌曲识别的详细审核结果
                     * 
                     */
                    std::vector<LabelResult> GetLabelResults() const;

                    /**
                     * 设置该字段用于返回音频文件歌曲识别的详细审核结果
                     * @param _labelResults 该字段用于返回音频文件歌曲识别的详细审核结果
                     * 
                     */
                    void SetLabelResults(const std::vector<LabelResult>& _labelResults);

                    /**
                     * 判断参数 LabelResults 是否已赋值
                     * @return LabelResults 是否已赋值
                     * 
                     */
                    bool LabelResultsHasBeenSet() const;

                    /**
                     * 获取审核命中类型
                     * @return HitType 审核命中类型
                     * 
                     */
                    std::string GetHitType() const;

                    /**
                     * 设置审核命中类型
                     * @param _hitType 审核命中类型
                     * 
                     */
                    void SetHitType(const std::string& _hitType);

                    /**
                     * 判断参数 HitType 是否已赋值
                     * @return HitType 是否已赋值
                     * 
                     */
                    bool HitTypeHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 该字段用于返回音频文件的时长，单位为毫秒。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     */
                    std::vector<AudioResultDetailTextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     */
                    std::vector<AudioResultDetailMoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     */
                    std::vector<AudioResultDetailLanguageResult> m_languageResults;
                    bool m_languageResultsHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Lable）下的二级标签。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 识别类标签结果信息列表
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频文件说话人检测的详细审核结果
                     */
                    std::vector<SpeakerResult> m_speakerResults;
                    bool m_speakerResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频文件出行检测的详细审核结果
                     */
                    std::vector<TravelResult> m_travelResults;
                    bool m_travelResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频文件的三级标签
                     */
                    std::string m_subTag;
                    bool m_subTagHasBeenSet;

                    /**
                     * 该字段用于返回音频文件的三级标签码
                     */
                    std::string m_subTagCode;
                    bool m_subTagCodeHasBeenSet;

                    /**
                     * 该字段用于返回音频文件歌曲识别的详细审核结果
                     */
                    std::vector<LabelResult> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * 审核命中类型
                     */
                    std::string m_hitType;
                    bool m_hitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULT_H_
