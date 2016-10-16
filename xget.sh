#!/bin/bash

if command -v wget 2>/dev/null;
  then echo Wget installed.
else
  os=$(uname -s)
  if [os=="Darwin"];
    then $(brew install wget)
  if [os==""]
fi
XGETos=$(uname -s)
echo $XGETos
