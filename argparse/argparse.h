#ifndef ARGPARSE_H
#define ARGPARSE_H

int parse_arg(int num_args, char **arg_ptr);
int argparse_elfcmd(int num_args, char **arg_ptr);
int argparse_binimagecmd(int num_args, char **arg_ptr);

#endif
