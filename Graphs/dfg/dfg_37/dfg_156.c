#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 513460286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, float p_5, unsigned long long p_15[4])
{
  long long v_13;
  char v_11;
  long v_9;
  double v_7;
  char v;
  unsigned char result;
  v_13 = (long long)p;
  v_11 = (char)-66;
  v_7 = (double)p_5;
  v_9 = (long)((unsigned long long)((int)p / ((int)((unsigned char)(v_7 / (
                                                                    v_7 + 380.) + (double)p_5)) + 410)) + p_15[0]);
  v = (char)(- ((v_7 * v_7) / ((double)(v_9 | (long)6682777088.f) + 366.)) - 
             (double)(290268448LL + (long long)v_11 % (v_13 + 335LL)) / (
             - (- v_7) + 681.));
  result = (unsigned char)p_5;
  result = (unsigned char)(! (((-124 * (int)result) % ((-20 - (int)v) + 178)) % (
                              (int)p + 668)));
  return result;
}


