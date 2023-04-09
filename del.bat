echo off
set DIR="%cd%"
for /R %DIR% %%f in (*.exe) do ( 
del %%f
)
pause