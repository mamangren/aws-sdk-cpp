/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/iam/model/GetAccountAuthorizationDetailsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetAccountAuthorizationDetailsResult::GetAccountAuthorizationDetailsResult() : 
    m_isTruncated(false)
{
}

GetAccountAuthorizationDetailsResult::GetAccountAuthorizationDetailsResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

GetAccountAuthorizationDetailsResult& GetAccountAuthorizationDetailsResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "GetAccountAuthorizationDetailsResult")
  {
    resultNode = rootNode.FirstChild("GetAccountAuthorizationDetailsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode userDetailListNode = resultNode.FirstChild("UserDetailList");
    if(!userDetailListNode.IsNull())
    {
      XmlNode userDetailListMember = userDetailListNode.FirstChild("member");
      while(!userDetailListMember.IsNull())
      {
        m_userDetailList.push_back(userDetailListMember);
        userDetailListMember = userDetailListMember.NextNode("member");
      }

    }
    XmlNode groupDetailListNode = resultNode.FirstChild("GroupDetailList");
    if(!groupDetailListNode.IsNull())
    {
      XmlNode groupDetailListMember = groupDetailListNode.FirstChild("member");
      while(!groupDetailListMember.IsNull())
      {
        m_groupDetailList.push_back(groupDetailListMember);
        groupDetailListMember = groupDetailListMember.NextNode("member");
      }

    }
    XmlNode roleDetailListNode = resultNode.FirstChild("RoleDetailList");
    if(!roleDetailListNode.IsNull())
    {
      XmlNode roleDetailListMember = roleDetailListNode.FirstChild("member");
      while(!roleDetailListMember.IsNull())
      {
        m_roleDetailList.push_back(roleDetailListMember);
        roleDetailListMember = roleDetailListMember.NextNode("member");
      }

    }
    XmlNode policiesNode = resultNode.FirstChild("Policies");
    if(!policiesNode.IsNull())
    {
      XmlNode policiesMember = policiesNode.FirstChild("member");
      while(!policiesMember.IsNull())
      {
        m_policies.push_back(policiesMember);
        policiesMember = policiesMember.NextNode("member");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetAccountAuthorizationDetailsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
