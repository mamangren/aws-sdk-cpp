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
#include <aws/rds/model/CreateDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBParameterGroupRequest::CreateDBParameterGroupRequest() : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBParameterGroup&";
  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
    ss << "DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  ss << "Version=2013-01-10";
  return ss.str();
}

