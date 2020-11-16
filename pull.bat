echo off
cls
echo This is to pull the latest repository
echo.
git fetch origin --prune
echo.
git rebase origin/main
echo.
pause