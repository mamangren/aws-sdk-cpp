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
#include <aws/email/model/GetIdentityPoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

GetIdentityPoliciesRequest::GetIdentityPoliciesRequest() : 
    m_identityHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

Aws::String GetIdentityPoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetIdentityPolicies&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }
  if(m_policyNamesHasBeenSet)
  {
    unsigned policyNamesCount = 1;
    for(auto& item : m_policyNames)
    {
      ss << "PolicyNames.member." << policyNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyNamesCount++;
    }
  }
  ss << "Version=2010-12-01";
  return ss.str();
}

