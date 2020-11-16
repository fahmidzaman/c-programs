echo off
cls
echo This is to commit the current data to repository
git add .
echo.
git commit -m "New Code Added"
echo.
git fetch origin --prune
echo.
git rebase origin/main
echo.
pause