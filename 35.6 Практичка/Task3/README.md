# Recursive File Finder

Небольшой C++ проект для рекурсивного обхода каталогов и получения имён файлов с указанным расширением.

## Требования
- Windows (разрабатывается под CLion на Windows)
- Компилятор с поддержкой `std::filesystem` (C++17 или новее)
- CMake (используется CLion или командная строка)

## Структура проекта
- `include/recursive_file_utils.h` — объявление функции (экспорт `std::function`).
- `src/recursive_file_utils.cpp` — реализация лямбда-функции `recursiveGetFileNamesByExtension`.
- `src/main.cpp` — пример использования и точка входа приложения.
- `CMakeLists.txt` — (ожидается в корне) конфигурация сборки.

## Краткое описание API
Функция `recursiveGetFileNamesByExtension` имеет сигнатуру:
(std::filesystem::path, const std::string) -> std::vectorstd::string
- Возвращает список имён файлов (только имя файла, без пути), найденных рекурсивно.
- Аргумент `extension` должен включать точку, например `".txt"`. В `main` точка добавляется автоматически, если она пропущена.
- Невозможные для чтения элементы пропускаются (функция безопасно игнорирует ошибки `std::filesystem::filesystem_error`).

## Сборка
Открыть проект в CLion — CLion сам позаботится о конфигурации CMake и сборке.

Или из командной строки:
```bash
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022"   # или другой генератор под вашу систему
cmake --build . --config Release

## Запуск

Пример запуска (путь и расширение в качестве аргументов):
# если сборка через CLion — используйте конфигурацию Run
# если через командную строку:
.\build\Release\<executable>.exe "D:\dir1" .txt

Программа выведет по одной строке — имена найденных файлов с указанным расширением.
Примеры
Найти все .torrent файлы в D:\downloads:
.\<executable>.exe "D:\downloads" .torrent
Можно передать расширение без точки — main добавит . автоматически:
.\<executable>.exe "D:\downloads" txt
