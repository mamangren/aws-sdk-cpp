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
#include <aws/monitoring/model/Statistic.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int SampleCount_HASH = HashingUtils::HashString("SampleCount");
static const int Average_HASH = HashingUtils::HashString("Average");
static const int Sum_HASH = HashingUtils::HashString("Sum");
static const int Minimum_HASH = HashingUtils::HashString("Minimum");
static const int Maximum_HASH = HashingUtils::HashString("Maximum");

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
namespace StatisticMapper
{
Statistic GetStatisticForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == SampleCount_HASH)
  {
    return Statistic::SampleCount;
  }
  else if (hashCode == Average_HASH)
  {
    return Statistic::Average;
  }
  else if (hashCode == Sum_HASH)
  {
    return Statistic::Sum;
  }
  else if (hashCode == Minimum_HASH)
  {
    return Statistic::Minimum;
  }
  else if (hashCode == Maximum_HASH)
  {
    return Statistic::Maximum;
  }

  return Statistic::NOT_SET;
}

Aws::String GetNameForStatistic(Statistic value)
{
  switch(value)
  {
  case Statistic::SampleCount:
    return "SampleCount";
  case Statistic::Average:
    return "Average";
  case Statistic::Sum:
    return "Sum";
  case Statistic::Minimum:
    return "Minimum";
  case Statistic::Maximum:
    return "Maximum";
  default:
    return "";
  }
}

} // namespace StatisticMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
