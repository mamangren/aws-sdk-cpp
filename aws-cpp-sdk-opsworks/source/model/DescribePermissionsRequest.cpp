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
#include <aws/opsworks/model/DescribePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePermissionsRequest::DescribePermissionsRequest() : 
    m_iamUserArnHasBeenSet(false),
    m_stackIdHasBeenSet(false)
{
}

Aws::String DescribePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("IamUserArn", m_iamUserArn);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribePermissions"));
  return std::move(headers);

}



