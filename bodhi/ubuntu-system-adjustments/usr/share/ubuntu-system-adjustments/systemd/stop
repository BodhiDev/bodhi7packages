#!/usr/bin/python3
import datetime
import subprocess


try:
    # Log current datetime
    now = str(datetime.datetime.now())
    with open("/var/log/ubuntu-system-adjustments-stop.log", "w") as f:
        f.write(now)

    # Adjust Grub title
    subprocess.call(["/usr/share/ubuntu-system-adjustments/systemd/adjust-grub-title"])

except:
    pass

