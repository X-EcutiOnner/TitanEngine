@echo off
setlocal enableextensions
if exist deps rmdir /s /q deps
mkdir deps\x32
mkdir deps\x64
copy /y Release\x32\TitanEngine.dll deps\x32\TitanEngine.dll
copy /y Release\x32\TitanEngine.pdb deps\x32\TitanEngine.pdb
copy /y Release\x64\TitanEngine.dll deps\x64\TitanEngine.dll
copy /y Release\x64\TitanEngine.pdb deps\x64\TitanEngine.pdb
