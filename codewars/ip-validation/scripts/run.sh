#!/usr/bin/env bash

./scripts/build.sh && \
./bin/main && \
rm ./bin/main
