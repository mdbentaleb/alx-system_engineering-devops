#Change the OS configuration to log
exec { '/usr/bin/env sed -i "s/holberton/foo/" /etc/security/limits.conf': }
