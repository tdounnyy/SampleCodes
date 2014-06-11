#!/usr/bin/python
import sys
import os
#import re

# Exit code defination
EXIT_OK = 0
EXIT_NOT_SVN_REPO = 1

# Print parameters
for i in range(0, len(sys.argv)):
    print "script params :", sys.argv[i]

# Test .svn dir
dirs = os.listdir(os.getcwd())
if not ".svn" in dirs and os.path.isdir("./.svn"):
    print "This is not a svn workspace"
    exit(EXIT_NOT_SVN_REPO)

# Get svn status
cmd = "svn status"
lines = os.popen(cmd).readlines()
targets = []
# Exam every output lines
for line in lines:
# Find modified files under code/
## Method 1
    line = line.split()
    #print line
    if line[0] == '?' and line[1].startswith('code/'):
        #print line[1]
## Method 2
    #if re.findall('^M.+code',line):
        #print re.sub('^M.+code','code',line),

        targets.append(line[1])

dry_run = len(sys.argv) >= 2 and sys.argv[1] == '-n'
if dry_run:
    print "dry run"
for file in targets:
    print 'delete', file
    if not dry_run:
        os.system("rm -rf " + file)
        #os.system("svn revert " + file)









exit(EXIT_OK)
