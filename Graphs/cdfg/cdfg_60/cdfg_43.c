#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071995035
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, long p_5, unsigned short p_11, int p_15,
          unsigned short p_17)
{
  unsigned char v_23;
  unsigned long long v_21;
  unsigned long long v_19;
  long long v_13;
  long v_9;
  unsigned short v_7;
  unsigned long v;
  float result;
  v_23 = (unsigned char)118;
  v_19 = (unsigned long long)p_11;
  v_13 = (long long)p_5;
  v_9 = (long)p_17;
  v_7 = p_11;
  v = 637584393UL;
  result = (float)p;
  if ((unsigned long long)(! (- (18670L - (long)p_17))) < (unsigned long long)(
                                                          -23477 * (int)(~ v_7)) % (
                                                          (v_19 / (unsigned long long)(
                                                           p + 6L)) % (unsigned long long)(
                                                          ((long long)v_7 + v_13) + 714LL) + 28ULL)) {
    v_21 = (unsigned long long)(! (-1013486127LL + v_13 % (long long)(
                                                   v + 6UL)));
    v_9 = (long)(((int)p_17 << ((int)((unsigned short)(861051600.024 * (double)p_5)) & 15)) % (
                 (32439 << (15203ULL / (v_21 + 490ULL) & 15ULL)) + 959));
    result = (float)((unsigned long)p_17 - (unsigned long)p_15 * v);
  }
  else {
    v_23 = ! v_23;
    v_19 = (unsigned long long)(~ (~ (p % (p + 915L))));
    v = ((unsigned long)(! p) % ((v - (unsigned long)v_23) + 993UL)) / 8UL;
  }
  while (0.f >= - (- (-712.619506836f / ((float)p + 35.f)))) {
    v_13 = (long long)((unsigned long long)((unsigned int)p_15 & (unsigned int)p_17 % 3358024748U) - (
                       (unsigned long long)(v_13 + (long long)p_15) ^ 
                       (unsigned long long)p_11 % (v_19 + 886ULL)));
    v = (unsigned long)((long long)((p % (long)((int)v_7 + 379)) / ((
                                                                    p_5 << (
                                                                    v_9 & 31L)) + 416L)) - (
                        (long long)(v % (unsigned long)((int)p_11 + 894)) + v_13));
    result = (float)(v - (unsigned long)(~ (- p_5)));
  }
  while_0_break: ;
  return result;
}


