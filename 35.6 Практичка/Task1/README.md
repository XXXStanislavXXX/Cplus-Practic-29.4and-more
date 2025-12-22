README

## Краткое описание

Программа на C++: распечатывает числа от 1 до 5, используя range-based цикл и std::initializer_list. 
Все реализации функций находятся в папке src (*.cpp), декларации — в папке include (*.h). 

## Требования

- Windows
- CLion 2025.3.1 или CMake + компилятор с поддержкой C++17 (или новее)
  Структура проекта (основное)
- CMakeLists.txt — конфигурация сборки CMake
- include/print_numbers.h — объявление функции print_numbers
- src/print_numbers.cpp — реализация функции print_numbers
- README.md — этот файл
  Сборка и запуск (через терминал)
  mkdir build
  cd build
  cmake ..
  cmake --build . --config Release
# Запустите исполняемый файл, например:
# .\print_numbers.exe  (или ./print_numbers на POSIX-подобных системах)
Ожидаемый вывод
i = 1
i = 2
i = 3
i = 4
i = 5
Лицензия
Проект без явной лицензии (при необходимости добавьте LICENSE).