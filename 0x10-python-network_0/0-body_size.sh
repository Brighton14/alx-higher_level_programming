#!/bin/bash
# Display the size of the body of a request sent to a server.
curl -sI "$1" | grep "Content-Length" | cut -d " " -f2
