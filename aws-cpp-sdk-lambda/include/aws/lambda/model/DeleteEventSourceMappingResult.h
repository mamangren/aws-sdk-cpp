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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  /*
    <p>Describes mapping between an Amazon Kinesis stream and a Lambda function.</p>
  */
  class AWS_LAMBDA_API DeleteEventSourceMappingResult
  {
  public:
    DeleteEventSourceMappingResult();
    DeleteEventSourceMappingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteEventSourceMappingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline void SetUUID(const Aws::String& value) { m_uUID = value; }

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline void SetUUID(Aws::String&& value) { m_uUID = value; }

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline void SetUUID(const char* value) { m_uUID.assign(value); }

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline DeleteEventSourceMappingResult& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline DeleteEventSourceMappingResult& WithUUID(Aws::String&& value) { SetUUID(value); return *this;}

    /*
     <p>The AWS Lambda assigned opaque identifier for the mapping.</p>
    */
    inline DeleteEventSourceMappingResult& WithUUID(const char* value) { SetUUID(value); return *this;}

    /*
     <p>The largest number of records that AWS Lambda will retrieve from your event source at the time of invoking your function. Your function receives an event with all the retrieved records.</p>
    */
    inline long GetBatchSize() const{ return m_batchSize; }

    /*
     <p>The largest number of records that AWS Lambda will retrieve from your event source at the time of invoking your function. Your function receives an event with all the retrieved records.</p>
    */
    inline void SetBatchSize(long value) { m_batchSize = value; }

    /*
     <p>The largest number of records that AWS Lambda will retrieve from your event source at the time of invoking your function. Your function receives an event with all the retrieved records.</p>
    */
    inline DeleteEventSourceMappingResult& WithBatchSize(long value) { SetBatchSize(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline DeleteEventSourceMappingResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline DeleteEventSourceMappingResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon Kinesis stream that is the source of events.</p>
    */
    inline DeleteEventSourceMappingResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = value; }

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline DeleteEventSourceMappingResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline DeleteEventSourceMappingResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(value); return *this;}

    /*
     <p>The Lambda function to invoke when AWS Lambda detects an event on the stream.</p>
    */
    inline DeleteEventSourceMappingResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

    /*
     <p>The UTC time string indicating the last time the event mapping was updated.</p>
    */
    inline double GetLastModified() const{ return m_lastModified; }

    /*
     <p>The UTC time string indicating the last time the event mapping was updated.</p>
    */
    inline void SetLastModified(double value) { m_lastModified = value; }

    /*
     <p>The UTC time string indicating the last time the event mapping was updated.</p>
    */
    inline DeleteEventSourceMappingResult& WithLastModified(double value) { SetLastModified(value); return *this;}

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResult = value; }

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResult = value; }

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResult.assign(value); }

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline DeleteEventSourceMappingResult& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline DeleteEventSourceMappingResult& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(value); return *this;}

    /*
     <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
    */
    inline DeleteEventSourceMappingResult& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline const Aws::String& GetState() const{ return m_state; }

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline void SetState(Aws::String&& value) { m_state = value; }

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline void SetState(const char* value) { m_state.assign(value); }

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline DeleteEventSourceMappingResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline DeleteEventSourceMappingResult& WithState(Aws::String&& value) { SetState(value); return *this;}

    /*
     <p>The state of the event source mapping. It can be "Creating", "Enabled", "Disabled", "Enabling", "Disabling", "Updating", or "Deleting".</p>
    */
    inline DeleteEventSourceMappingResult& WithState(const char* value) { SetState(value); return *this;}

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReason = value; }

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReason = value; }

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReason.assign(value); }

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline DeleteEventSourceMappingResult& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline DeleteEventSourceMappingResult& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(value); return *this;}

    /*
     <p>The reason the event source mapping is in its current state. It is either user-requested or an AWS Lambda-initiated state transition.</p>
    */
    inline DeleteEventSourceMappingResult& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}

  private:
    Aws::String m_uUID;
    long m_batchSize;
    Aws::String m_eventSourceArn;
    Aws::String m_functionArn;
    double m_lastModified;
    Aws::String m_lastProcessingResult;
    Aws::String m_state;
    Aws::String m_stateTransitionReason;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
