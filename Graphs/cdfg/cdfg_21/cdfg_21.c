#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 780692754
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p[3], char p_5, int p_9, signed char p_11, long p_13)
{
  float v_19;
  unsigned long v_17;
  unsigned char v_15;
  short v_7;
  unsigned char v;
  double result;
  v_19 = (float)p_5;
  v_15 = (unsigned char)193;
  result = (double)p_9;
  v_17 = (unsigned long)p_11;
  if ((unsigned long)(p_13 % (long)((-8496 + p_9) + 855)) / (51UL % (
                                                             - v_17 + 869UL) + 561UL) == (unsigned long)(
      (long)((104 + (int)((char)v_19)) / (- p_9 + 281)) % (- (! p_13) + 821L))) {
    v = (unsigned char)(19659LL * p[2]);
    result = (double)(- (~ v));
  }
  else {
    result = (167.672576904 / (result + 76.) - (double)((long)p_11 % (
                                                        p_13 + 439L))) * (double)(
             (-459L + (long)p_9) ^ (long)v_15);
    v_7 = (short)p_9;
    result = (double)((62 + (int)((char)result) * (int)p_5) + (int)(~ v_7));
  }
  return result;
}


