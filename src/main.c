//
// Created by dongvin on 25. 4. 26.
//
#include<stdio.h>

#include <stdio.h>
#include <uv.h>

int main() {
  uv_loop_t *loop = uv_default_loop();

  printf("Now quitting loop.\n");
  uv_run(loop, UV_RUN_DEFAULT);

  uv_loop_close(loop);
  return 0;
}