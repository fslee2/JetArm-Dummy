#!/bin/bash

# A script to find and kill processes using a specific serial port.

# Check if a device name is provided as an argument
if [ -z "$1" ]; then
  echo "Usage: $0 <device_path>"
  echo "Example: $0 /dev/ttyUSB1"
  exit 1
fi

DEVICE_PATH=$1

echo "Checking for processes using ${DEVICE_PATH}..."

# lsof -t command directly returns only the PIDs, which is cleaner.
PIDS=$(lsof -t ${DEVICE_PATH} 2>/dev/null)

if [ -z "$PIDS" ]; then
  echo "No processes found using ${DEVICE_PATH}. The port is clean."
else
  # The PIDS variable might contain multiple PIDs, separated by newlines.
  echo "Found processes with the following PIDs:"
  echo "$PIDS"
  echo "Killing processes..."
  
  # Use xargs to handle multiple PIDs and pass them to kill.
  echo "$PIDS" | xargs kill -9
  
  echo "Processes killed successfully."
fi

echo "Done."


