echo off
cls
echo This is to pull the latest repository
echo.
git stash
echo.
git fetch origin --prune
echo.
git stash pop
echo.
git rebase origin/main
echo.
pause