#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042935069
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, signed char p_4, short p_6, unsigned short p_9,
                   unsigned long p_17)
{
  char v_21;
  long long v_19;
  unsigned int v_15;
  unsigned long long v_13;
  float v_11;
  long v;
  unsigned short result;
  v_21 = (char)-53;
  v_19 = (long long)p_17;
  v_15 = 41048U;
  v_11 = 2.14362454624e+38f;
  result = (unsigned short)p_6;
  if (~ v_19 * -6263LL - (long long)(! ((long)result * -220L)) == (long long)v_21) {
    v_13 = (unsigned long long)((unsigned long)(12365L / (long)((int)((char)v_11) / 19 + 22)) % (
                                (52896UL | p_17) + 472UL));
    v = (long)(82U ^ v_15);
    v_11 = (float)(- (16799ULL % (v_13 + 886ULL)) - (unsigned long long)(! (- p_4)));
  }
  else {
    v = (long)(- (~ (62 % ((int)p_9 + 324))));
    v_11 = (float)(~ p_6);
  }
  if (! ((long)p_6 - v) - (long)p_9 >= (long)((int)((unsigned short)v_11) - 63256)) 
    result = (unsigned short)(- 8012951918.94);
  else result = (unsigned short)((1031941757ULL | (unsigned long long)p) / (unsigned long long)(
                                 (int)p + 877) + (unsigned long long)p_4);
  return result;
}


