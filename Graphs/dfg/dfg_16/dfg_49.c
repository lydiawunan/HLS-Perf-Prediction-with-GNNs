#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 240594360
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p[3], unsigned long long p_7, unsigned int p_11,
                  unsigned short p_15[1][4])
{
  unsigned char v_19;
  long v_17;
  unsigned char v_13;
  unsigned char v_9;
  signed char v_4;
  unsigned long long v;
  unsigned char result;
  v_19 = (unsigned char)p_15[0][1];
  v_17 = 43439L;
  v_13 = (unsigned char)69;
  v = 18446744073092556251ULL;
  v_9 = (unsigned char)(((v * (unsigned long long)p_11) % (unsigned long long)(
                         (int)(- v_13) + 856) + (unsigned long long)(
                         (long)(-12453 % ((int)p_15[0][1] + 742)) / (
                         (v_17 - (long)v_19) + 1016L))) % ((unsigned long long)p[2] + 860ULL));
  v_4 = (signed char)v_9;
  v = - p_7;
  result = (unsigned char)((float)(! (- v) % (v * (unsigned long long)(~ v_4) + 282ULL)) + p[1]);
  return result;
}


