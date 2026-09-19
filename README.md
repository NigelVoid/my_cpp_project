# WSL(Linux)
#
## Правильно создания папки сборки:
cmake -B build -S .
### Пример:
~/git_clones$ cmake -B build -S .
## Компилируем(собираем) проект:
cmake --build build
### Пример: 
~/git_clones$ cmake --build build
## Запуск программы:
./build/main
### Пример:
~/git_clones$ ./build/main