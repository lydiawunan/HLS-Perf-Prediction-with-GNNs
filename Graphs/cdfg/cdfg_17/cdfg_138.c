#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 696877885
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned int p_7, signed char p_9, short p_13,
                 unsigned long long p_15)
{
  int v_25;
  char v_23;
  double v_21;
  char v_19;
  unsigned char v_17;
  int v_11;
  long long v_5;
  unsigned short v;
  unsigned int result;
  v_25 = (int)p_15;
  v_23 = (char)p_7;
  v_21 = -5218980759.88;
  v_19 = (char)-113;
  v_17 = (unsigned char)188;
  v = (unsigned short)p_7;
  while ((long long)v_19 <= - p) {
    v = v_25 % ((int)((double)v_23 - (v_21 - -64963.)) + 140);
    v = (unsigned short)(388233911UL >> ((-54 + 48422 * (int)v) & 31));
    v_25 = ~ (~ 6415);
    v_19 = (char)(~ 0);
  }
  while_0_break: ;
  if ((unsigned long long)p % ((unsigned long long)((int)p_9 + (int)p_13) * (
                               p_15 - (unsigned long long)v_17) + 831ULL) != (unsigned long long)(- p_13)) {
    v_5 = (long long)(((p_7 % ((unsigned int)2.90669223649e+38 + 554U)) / (unsigned int)(
                       (int)p_9 + 91)) % (unsigned int)((int)(~ (- v)) + 392));
    v = (unsigned short)(! (~ p % ((v_5 >> 8L) + 414LL)));
    result = (unsigned int)(- (p - (long long)((unsigned int)v - 39564U)));
  }
  else {
    v_11 = 29850;
    result = (unsigned int)v_11;
  }
  return result;
}


