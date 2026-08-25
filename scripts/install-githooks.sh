#!/bin/sh
set -e
ROOT_DIR=$(git rev-parse --show-toplevel)
if [ -z "$ROOT_DIR" ]; then
  echo "Not a git repository." >&2
  exit 1
fi
git config core.hooksPath .githooks
echo "Installed hooks: set core.hooksPath to .githooks"
echo "Run 'git config --unset core.hooksPath' to undo."
