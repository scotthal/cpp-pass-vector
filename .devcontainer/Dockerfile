FROM ubuntu:latest

ARG USERNAME=scotthal
ARG USER_UID=1100
ARG USER_GID=$USER_UID

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update; \
  apt-get -y install locales less dialog apt-utils man-db bc zsh fish zip unzip sudo tmux bat vim emacs-nox git iproute2 procps lsb-release libnss3-tools curl httpie jq sqlite3; \
  apt-get -y install build-essential autoconf automake cmake m4 bison flex gettext; \
  apt-get -y install clang clang-14 clang-format-14 clang-14-doc libc++1-14 libc++-14-dev libc++abi-14-dev; \
  apt-get -y install libssl-dev libcurl4-openssl-dev zlib1g-dev libbz2-dev libreadline-dev libsqlite3-dev wget curl llvm libncurses5-dev libncursesw5-dev libelf-dev xz-utils tk-dev libffi-dev liblzma-dev python-openssl; \
  apt-get -y install libgmp-dev; \
  apt-get -y dist-upgrade; \
  echo 'en_US.UTF-8 UTF-8' >> /etc/locale.gen; \
  locale-gen; \
  update-locale LANG=en_US.UTF-8; \
  update-alternatives --set cc /usr/bin/clang; \
  update-alternatives --set c++ /usr/bin/clang++; \
  groupadd --gid $USER_GID $USERNAME; \
  useradd -s /bin/zsh --uid $USER_UID --gid $USER_GID -m $USERNAME; \
  echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME; \
  chmod 440 /etc/sudoers.d/$USERNAME; \
  curl -L https://github.com/bazelbuild/bazelisk/releases/download/v1.12.0/bazelisk-linux-amd64 > /tmp/bazel; \
  mkdir -p /home/${USERNAME}/bin; \
  chown ${USERNAME}:${USERNAME} /home/${USERNAME}/bin; \
  install -o ${USERNAME} -g ${USERNAME} /tmp/bazel /home/${USERNAME}/bin/bazel; \
  rm -f /tmp/bazel; \
  curl -L https://github.com/bazelbuild/buildtools/releases/download/5.1.0/buildifier-linux-amd64 > /tmp/buildifier; \
  install -o ${USERNAME} -g ${USERNAME} /tmp/buildifier /home/${USERNAME}/bin/buildifier; \
  rm -f /tmp/buildifier; \
  apt-get autoremove -y ;\
  apt-get clean -y; \
  rm -rf /var/lib/apt/lists/*

ENV DEBIAN_FRONTEND=

WORKDIR /home/${USERNAME}
USER ${USERNAME}

CMD ["/bin/zsh"]
