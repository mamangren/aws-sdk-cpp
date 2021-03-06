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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/S3Location.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /*
    <p> Describes the properties of an application version. </p>
  */
  class AWS_ELASTICBEANSTALK_API ApplicationVersionDescription
  {
  public:
    ApplicationVersionDescription();
    ApplicationVersionDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationVersionDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline ApplicationVersionDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline ApplicationVersionDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of the application associated with this release.</p>
    */
    inline ApplicationVersionDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /*
     <p>The description of this application version.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /*
     <p>The description of this application version.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>The description of this application version.</p>
    */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>The description of this application version.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>The description of this application version.</p>
    */
    inline ApplicationVersionDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>The description of this application version.</p>
    */
    inline ApplicationVersionDescription& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /*
     <p>The description of this application version.</p>
    */
    inline ApplicationVersionDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline ApplicationVersionDescription& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline ApplicationVersionDescription& WithVersionLabel(Aws::String&& value) { SetVersionLabel(value); return *this;}

    /*
     <p> A label uniquely identifying the version for the associated application. </p>
    */
    inline ApplicationVersionDescription& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

    /*
     <p> The location where the source bundle is located for this version. </p>
    */
    inline const S3Location& GetSourceBundle() const{ return m_sourceBundle; }

    /*
     <p> The location where the source bundle is located for this version. </p>
    */
    inline void SetSourceBundle(const S3Location& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = value; }

    /*
     <p> The location where the source bundle is located for this version. </p>
    */
    inline void SetSourceBundle(S3Location&& value) { m_sourceBundleHasBeenSet = true; m_sourceBundle = value; }

    /*
     <p> The location where the source bundle is located for this version. </p>
    */
    inline ApplicationVersionDescription& WithSourceBundle(const S3Location& value) { SetSourceBundle(value); return *this;}

    /*
     <p> The location where the source bundle is located for this version. </p>
    */
    inline ApplicationVersionDescription& WithSourceBundle(S3Location&& value) { SetSourceBundle(value); return *this;}

    /*
     <p>The creation date of the application version.</p>
    */
    inline double GetDateCreated() const{ return m_dateCreated; }

    /*
     <p>The creation date of the application version.</p>
    */
    inline void SetDateCreated(double value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /*
     <p>The creation date of the application version.</p>
    */
    inline ApplicationVersionDescription& WithDateCreated(double value) { SetDateCreated(value); return *this;}

    /*
     <p>The last modified date of the application version.</p>
    */
    inline double GetDateUpdated() const{ return m_dateUpdated; }

    /*
     <p>The last modified date of the application version.</p>
    */
    inline void SetDateUpdated(double value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /*
     <p>The last modified date of the application version.</p>
    */
    inline ApplicationVersionDescription& WithDateUpdated(double value) { SetDateUpdated(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;
    S3Location m_sourceBundle;
    bool m_sourceBundleHasBeenSet;
    double m_dateCreated;
    bool m_dateCreatedHasBeenSet;
    double m_dateUpdated;
    bool m_dateUpdatedHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
