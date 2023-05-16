#!/bin/bash

# Create the directories
mkdir -p final/src
mkdir -p final/data/main
mkdir -p final/data/backup
mkdir -p final/config

# Create empty placeholder files
touch final/src/main.cpp
touch final/src/header.h
touch final/data/main/mainDB.db
touch final/data/backup/backupDB.db
touch final/config/config.yml
touch final/README.MD

# Commit the changes
git add final/
git commit -m "Added directory structure and placeholder files"
git push origin master
