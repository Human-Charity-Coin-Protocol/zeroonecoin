#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.zeroonecore/zerooned.pid file instead
zeroone_pid=$(<~/.zeroonecore/testnet3/zerooned.pid)
sudo gdb -batch -ex "source debug.gdb" zerooned ${zeroone_pid}
