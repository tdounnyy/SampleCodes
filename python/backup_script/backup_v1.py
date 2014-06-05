#!/usr/bin/python
# Back up dirs into a zip archive

import os
import time

source_dir = ['/data/ftp/', '/data/SystemUI/']
target_dir = '/data/'
target = target_dir + time.strftime('%Y-%m-%d_%H-%M-%S') + '.zip'
zip_cmd = "zip -qr %s %s" % (target, ' '.join(source_dir))

if os.system(zip_cmd) == 0:
    print 'Finish : ' + zip_cmd
else:
    print 'Fail : ' + zip_cmd
