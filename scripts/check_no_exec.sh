#!/bin/sh
# Exit non-zero if any tracked file is executable (mode 100755)
set -e
execs=$(git ls-files --stage | awk '$1 == "100755" {print $4}') || true
if [ -n "$execs" ]; then
  echo "Tracked executable files found:" >&2
  echo "$execs" >&2
  exit 1
fi
echo "No tracked executable files found."
exit 0
