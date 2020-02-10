#!/bin/sh

./clean.sh

go build -buildmode=c-archive -o libgolib.a

python3 createbindings.py > golib.c

gcc golib.c -shared -o pygolib.so $(pkg-config --cflags --libs python3) \
	$(python3-config --libs) -L. -lgolib
