ECHO "" | Add-Content -Path C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS;
ECHO "143.166.83.38 allegro.pl" | Add-Content -Path C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS;
ECHO "143.166.83.38 www.allegro.pl" | Add-Content -Path C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS;
ipconfig /flushdns
exit