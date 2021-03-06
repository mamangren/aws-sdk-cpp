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
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /*
  */
  class AWS_KMS_API ListAliasesRequest : public KMSRequest
  {
  public:
    ListAliasesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>Specify this parameter when paginating results to indicate the maximum number of aliases you want in each response. If there are additional aliases beyond the maximum you specify, the <code>Truncated</code> response element will be set to <code>true.</code> </p>
    */
    inline long GetLimit() const{ return m_limit; }

    /*
     <p>Specify this parameter when paginating results to indicate the maximum number of aliases you want in each response. If there are additional aliases beyond the maximum you specify, the <code>Truncated</code> response element will be set to <code>true.</code> </p>
    */
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    /*
     <p>Specify this parameter when paginating results to indicate the maximum number of aliases you want in each response. If there are additional aliases beyond the maximum you specify, the <code>Truncated</code> response element will be set to <code>true.</code> </p>
    */
    inline ListAliasesRequest& WithLimit(long value) { SetLimit(value); return *this;}

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline ListAliasesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline ListAliasesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> element in the response you just received. </p>
    */
    inline ListAliasesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    long m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
