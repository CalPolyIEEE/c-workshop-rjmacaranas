FROM gitpod/workspace-full

USER root
RUN apt-get update
RUN apt-get install -yq valgrind

USER gitpod
RUN echo 'alias vg="valgrind --leak-check=full --show-leak-kinds=all --error-exitcode=13"' >> ~/.bashrc