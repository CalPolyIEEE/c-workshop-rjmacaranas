FROM gitpod/workspace-full

RUN sudo apt-get install -yq valgrind

USER gitpod
