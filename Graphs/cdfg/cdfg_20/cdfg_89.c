#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 236128299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long p_4, unsigned short p_9,
         long long p_13, unsigned short p_15)
{
  unsigned long v_11;
  signed char v_7;
  float v;
  char result;
  v_11 = (unsigned long)-5759512576.f;
  if ((long long)v_11 <= p_13 % (long long)((691 / ((int)p_15 + 779)) % 29904 + 771)) {
    result = (char)(p | 15383UL);
    result = (char)((unsigned long)(-778812688L % (long)((int)result + 421)) - 
                    (p - 7513UL) * p_4);
  }
  else {
    v_7 = (signed char)((- p % (unsigned long)((unsigned int)p_9 % 3899282386U + 67U)) / 3709125507UL);
    v = (float)((unsigned long)v_7 * 4294949818UL);
    result = (char)(! (- (p * (unsigned long)v)));
  }
  return result;
}


