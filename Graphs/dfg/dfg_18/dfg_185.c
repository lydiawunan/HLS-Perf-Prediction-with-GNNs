#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 771580348
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, signed char p_5, signed char p_7)
{
  float v_13;
  unsigned int v_11;
  char v_9;
  int v;
  char result;
  v_11 = (unsigned int)p;
  v = -50895122;
  v_11 = ! ((v_11 / 4294960124U) / 222U);
  v_9 = (char)p_7;
  v_13 = (float)((long long)((unsigned long)(! ((int)p_7 - v)) ^ ((unsigned long)v_11 - (
                                                                  (unsigned long)p_7 + p))) + 
                 -20060LL * ((long long)(p ^ (unsigned long)v) + 39503334LL));
  result = (char)(((p - p) % (unsigned long)(- v + 591) - (unsigned long)(
                   (int)p_5 % ((int)p_7 + 744))) * ((unsigned long)(~ (
                                                    (unsigned int)v_9 & v_11)) | (
                                                    (unsigned long)p_5 - (
                                                    (unsigned long)v_13 ^ 7744UL))));
  return result;
}


