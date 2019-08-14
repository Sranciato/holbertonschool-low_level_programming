#ifndef FILE_IO_H
#define FILE_IO_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy(int argc, char *argv[]);
size_t file_read(char *filefrom, char *fileto);
size_t file_create(char *fileto, char *text_content);

#endif
