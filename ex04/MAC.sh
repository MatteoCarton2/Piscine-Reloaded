#!/bin/sh
ifconfig | sed -nE "/([a-z0-9]{2}:){5}../p" | awk '{print $2}'
