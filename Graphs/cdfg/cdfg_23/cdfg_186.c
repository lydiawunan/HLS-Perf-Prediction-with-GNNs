#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 241282717
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long p_4, unsigned char p_6, signed char p_8,
              long p_11)
{
  float v_19;
  int v_17;
  float v_15;
  unsigned char v_13;
  unsigned int v;
  long long result;
  v_19 = (float)p;
  v_13 = (unsigned char)p_11;
  if ((-40453LL % (long long)(- p_11 + 583L) ^ (long long)((int)((signed char)(- v_19)) & (int)p_8)) < (long long)(- p_4)) {
    v_15 = (float)(- (! (! -1101L)));
    v_17 = (int)(- v_15 / ((float)(! (~ p_11)) + 565.f));
    v = (unsigned int)(((unsigned long)p_11 * ((unsigned long)v_13 * 60627546UL)) % (unsigned long)(
                       -358448801 * ((int)v_15 - v_17) + 897));
  }
  else v = (unsigned int)(! ((int)p % ((int)p + 68) | (int)(~ p_8)));
  if (36165U > (33599U | - v)) result = (long long)(! (~ ((long)p + p_4)));
  else result = (long long)(-103126010 >> 10);
  return result;
}


