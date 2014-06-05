#!/usr/bin/python
# Back up dirs into their own dir

import os
import time

source_dir = ['/data/ftp/', '/data/SystemUI/']
target_dir = '/data/backup/' + time.strftime('%Y-%m-%d_%H-%M-%S')
if not os.path.exists(target_dir):
    os.makedirs(target_dir)

for item in source_dir:
    # This is just a joke, for 2nd covering 1st backup!
    target = target_dir + os.sep + 'backup.zip'
    zip_cmd = "zip -qr %s %s" % (target, item)
    if os.system(zip_cmd) == 0:
        print 'Finish : ' + zip_cmd
    else:
        print 'Fail : ' + zip_cmd
