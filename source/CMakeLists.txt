# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  Vec2.cpp
  Mat2.cpp
  Circle.cpp
  Rectangle.cpp
  color.cpp
  )
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

#Build clock
add_executable(clock
  window.cpp
  glew.c
  clock.cpp
  Vec2.cpp
  Mat2.cpp
  color.cpp
  Circle.cpp
  Rectangle.cpp)
target_link_libraries(clock
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(clock glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  tests.cpp
  glew.c
  Vec2.cpp
  Mat2.cpp
  Circle.cpp
  Rectangle.cpp
  color.cpp
  window.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )


