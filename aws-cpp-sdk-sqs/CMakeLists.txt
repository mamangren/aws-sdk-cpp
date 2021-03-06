cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-sqs)

  file(GLOB AWS_SQS_HEADERS
    "include/aws/sqs/*.h"
  )

  file(GLOB AWS_SQS_MODEL_HEADERS
    "include/aws/sqs/model/*.h"
  )

  file(GLOB AWS_SQS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SQS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SQS_SRC
    ${AWS_SQS_HEADERS}
    ${AWS_SQS_MODEL_HEADERS}
    ${AWS_SQS_SOURCE}
    ${AWS_SQS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\sqs" FILES ${AWS_SQS_HEADERS})
      source_group("Header Files\\aws\\sqs\\model" FILES ${AWS_SQS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SQS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SQS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SQS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SQS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SQS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-sqs ${LIBTYPE} ${SQS_SRC})
  target_link_libraries(aws-cpp-sdk-sqs aws-cpp-sdk-core)

  if(NOT MSVC)
    add_definitions(-std=c++11)
  endif()

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-sqs
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_SQS_HEADERS} DESTINATION include/aws/sqs)
  install (FILES ${AWS_SQS_MODEL_HEADERS} DESTINATION include/aws/sqs/model)

