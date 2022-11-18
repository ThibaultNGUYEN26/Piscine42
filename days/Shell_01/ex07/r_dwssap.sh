cat /etc/passwd | egrep -v '#' | awk '(NR%2)==1' | rev 
