#!/usr/bin/python
import os
import sys
import re

cmd='cat /data/github/SampleCodes/python/svnScript/list'
lines=os.popen(cmd).readlines()

for line in lines:
    print line,

print 'match:'
pattern='^M.*\./src'
filted=[]
for line in lines:
    obj=re.match(pattern, line)
    #if re.match(pattern, line):
    if obj:
        print obj.group(0)
        print line
        filted.append(line)

print 'filted:'
for line in filted:
    print line,

print 'substring:'
for line in filted:
    print line.find(' ')
