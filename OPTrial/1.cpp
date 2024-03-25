#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <string>
#include <cstring>
#include <sys/wait.h>
using namespace std;
int main() {
    int pipe_fd[2]; // 0 for reading, 1 for writing
    pid_t cpid;
    char buf;

    // 创建管道
    if (pipe(pipe_fd) == -1) {
        perror("pipe");
    }

    for (int i = 0; i < 4; ++i) {
        cpid = fork();
        if (cpid == -1) {
            perror("fork");
        }

        if (cpid == 0) { // 子进程
            close(pipe_fd[0]); // 关闭读端

            // 发送消息
            string message = "Child " + to_string(getpid()) + " is sending a message to parent!\n";
            write(pipe_fd[1], message.c_str(), message.length());

            close(pipe_fd[1]); // 发送完毕，关闭写端
        } else {
            // 父进程不立即关闭管道，等待所有子进程发送完毕
        }
    }
    // 父进程读取数据
    close(pipe_fd[1]); // 关闭写端

    while (read(pipe_fd[0], &buf, 1) > 0) {
        write(STDOUT_FILENO, &buf, 1);
    }

    close(pipe_fd[0]); // 关闭读端

    // 等待所有子进程退出
    for (int i = 0; i < 4; ++i) {
        wait(NULL);
    }

    return 0;
}
