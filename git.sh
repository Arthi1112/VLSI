#!/bin/bash
cd /home/artmad/VLSI
DATE=$(echo `date`)
find . -type f ! -name "*.wdb" -print0 | xargs -0 git add
git rm --cached VerilogLab/**/*.wdb
git commit -m "$DATE"
git push origin
