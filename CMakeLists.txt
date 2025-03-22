# Поиск всех .cpp и .h файлов
file(GLOB_RECURSE LIB_SOURCES "src/*.cpp")
file(GLOB_RECURSE LIB_HEADERS "include/*.h")

# Создание библиотеки
add_library(eventhub STATIC ${LIB_SOURCES} ${LIB_HEADERS})

# Включение флага -fPIC
set_target_properties(eventhub PROPERTIES POSITION_INDEPENDENT_CODE ON)

# Подключение предкомпилированного заголовка
target_precompile_headers(eventhub PRIVATE include/pch.h)

# Установка директорий для поиска заголовков
target_include_directories(eventhub PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Настройка платформо-зависимых флагов
if (UNIX)
  target_compile_definitions(eventhub PRIVATE __linux__)
  target_compile_options(eventhub PRIVATE -Wall -Wextra -pedantic)
elseif(WIN32)
  target_compile_definitions(eventhub PRIVATE _WIN32)
  target_compile_options(eventhub PRIVATE /W4)
endif()

