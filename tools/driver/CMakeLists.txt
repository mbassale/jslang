set(LLVM_LINK_COMPONENTS
  Support
  )

add_jslang_tool(jslang
  Driver.cpp
  )

target_link_libraries(jslang
  PRIVATE
  jslangBasic
  )