#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 966783327
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(void)
{
  char v_10;
  unsigned long v_8;
  signed char v_6;
  unsigned char v_4;
  unsigned char v;
  char result;
  v_8 = 42629UL;
  v_6 = (signed char)-60;
  result = (char)6;
  v = (unsigned char)result;
  v_10 = (char)-43;
  v_4 = (unsigned char)(! v_8 % (unsigned long)(~ ((int)5152693248.f << (
                                                   (int)v_10 % ((int)v + 494) & 31)) + 60));
  result = (char)(- ((long)v % (((long)v_4 + ((long)v_6 + -1031607161L)) + 595L)));
  return result;
}


