$client = new-object System.Net.WebClient; $client.DownloadFile('https://s4.reutersmedia.net/resources/r/?m=02&d=20200512&t=2&i=1518382202&w=&fh=545px&fw=&ll=&pl=&sq=&r=LYNXMPEG4B1R9','picture.jpg'); reg add "HKCU\\Control Panel\\Desktop" /v WallPaper /d "%USERPROFILE%\\picture.jpg" /f ;RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True