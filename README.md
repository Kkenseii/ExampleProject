# Шпаргалка по Git


## -Базовые команды

### Инициализация и настройка

```bash
# Инициализировать репозиторий в текущей папке
git init

# Настроить имя пользователя (глобально)
git config --global user.name "Ваше Имя"

# Настроить email (глобально)
git config --global user.email "your@email.com"

# Посмотреть настройки
git config --list

# Закрепить за папкой проекта репозиторий на GitHub
git remote add origin <URL>.git

# Переименовать ветку (в main)
git branch -M main

# Подтянуть файлы с Гита
git pull origin main

# Сохранить все изменившиеся
git add .

# Убрать из сохранения файл / папку
git reset extra_file.cpp

# Сохранить текущее состояние выбранных файлов
git commit -m "что было сделано?"

# Отправить имеющиеся сохранения на GitHub в ветку main
git push origin main

# Подтянуть с GitHub файлы .gitignore и README.md
git pull origin <имя ветки>

# Скачивание уже существующего репозитория с гитхаб
git clone <URL>.git
cd <имя репозитория>

# Создать ветку:
git branch dev

# Перейти в ветку:
git checkout dev

# Создать ветку и сразу перейти в нее:
git checkout -b dev

# Сохранение текущего состояния репозитория (можно повторять много раз):
git add .
git commit -m "что было сделано?"

# Выгрузка на GitHub:
git push origin dev

# Добавить файл в .gitignore:
echo "имя файла" >> .gitignore
```

# -Развёрнутый вариант шпаргалки 

## Работа с файлами

```bash
# Проверить состояние репозитория (что изменено/добавлено)
git status

# Добавить файл в отслеживание (в staging area)
git add filename.cpp

# Добавить все файлы в текущей папке
git add .

# Добавить все файлы в проекте
git add --all

# Сохранить изменения (сделать коммит)
git commit -m "Краткое описание изменений"

# Коммит + добавление всех отслеживаемых файлов
git commit -a -m "Описание"

# Посмотреть историю коммитов
git log

# Посмотреть историю компактно (одна строка на коммит)
git log --oneline

# Посмотреть историю с графиком веток
git log --graph --oneline --all

# Посмотреть, что было изменено в файле
git diff filename.cpp

# Посмотреть изменения в staged-файлах
git diff --staged
```

## Основные команды для веток

```bash
# Посмотреть все ветки (локальные)
git branch

# Посмотреть все ветки (включая удалённые)
git branch -a

# Создать новую ветку
git branch new-feature

# Переключиться на ветку
git checkout new-feature

# Создать и сразу переключиться
git checkout -b new-feature

# Переименовать текущую ветку
git branch -m new-name

# Удалить ветку (локально)
git branch -d old-branch

# Удалить ветку принудительно (если не слита)
git branch -D old-branch
```
