#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 598689310
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, unsigned char p_5, short p_7,
                  unsigned int p_9, signed char p_13)
{
  short v_23;
  double v_21;
  unsigned int v_19;
  long long v_17;
  double v_15;
  unsigned char v_11;
  long long v;
  unsigned char result;
  v_23 = (short)p;
  v_21 = (double)p_7;
  v_19 = (unsigned int)p_13;
  v_17 = (long long)p_5;
  v_15 = (double)p_13;
  result = (unsigned char)47;
  v_19 = (unsigned int)(88 / ((-1 - (int)p_13) + 198) + (-29869 - (int)((short)v_21))) % (
         (~ (- v_19) << ((int)v_23 & 31)) + 689U);
  v_11 = (unsigned char)(((long long)((int)p_7 + (int)((short)v_15)) - (
                          (long long)result * v_17 + (long long)v_19)) + (long long)(- p_7));
  v = (long long)(~ (signed char)32);
  result = (unsigned char)(((long long)(! p) ^ -73LL * v) * (long long)(
                           (unsigned int)((int)p_5 + (int)p_7) * (p_9 & (unsigned int)v_11)) - (long long)(
                           (int)p_5 % ((int)(~ p_13) + 228) + 22));
  return result;
}


