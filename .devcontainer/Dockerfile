# Use Ubuntu for x86_64 platform
FROM --platform=linux/amd64 ubuntu:22.04

# Install dependencies
RUN apt-get update && \
    apt-get install -y g++ gdb build-essential vim

# Set working directory
WORKDIR /workspace
