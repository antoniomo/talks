#!/bin/sh

hyperfine 'python3 rawpy.py' 'python3 gopy.py' --warmup 3
