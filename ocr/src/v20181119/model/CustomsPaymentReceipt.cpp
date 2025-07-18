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

#include <tencentcloud/ocr/v20181119/model/CustomsPaymentReceipt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CustomsPaymentReceipt::CustomsPaymentReceipt() :
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_commonContentHasBeenSet(false)
{
}

CoreInternalOutcome CustomsPaymentReceipt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomsPaymentReceipt.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomsPaymentReceipt.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CommonContent") && !value["CommonContent"].IsNull())
    {
        if (!value["CommonContent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomsPaymentReceipt.CommonContent` is not array type"));

        const rapidjson::Value &tmpValue = value["CommonContent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_commonContent.push_back(item);
        }
        m_commonContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomsPaymentReceipt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_commonContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_commonContent.begin(); itr != m_commonContent.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CustomsPaymentReceipt::GetTitle() const
{
    return m_title;
}

void CustomsPaymentReceipt::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CustomsPaymentReceipt::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<OtherInvoiceItem> CustomsPaymentReceipt::GetContent() const
{
    return m_content;
}

void CustomsPaymentReceipt::SetContent(const vector<OtherInvoiceItem>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CustomsPaymentReceipt::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<OtherInvoiceItem> CustomsPaymentReceipt::GetCommonContent() const
{
    return m_commonContent;
}

void CustomsPaymentReceipt::SetCommonContent(const vector<OtherInvoiceItem>& _commonContent)
{
    m_commonContent = _commonContent;
    m_commonContentHasBeenSet = true;
}

bool CustomsPaymentReceipt::CommonContentHasBeenSet() const
{
    return m_commonContentHasBeenSet;
}

