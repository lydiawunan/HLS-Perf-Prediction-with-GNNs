#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 382397316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned int p_4, unsigned char p_7,
                 unsigned short p_9, signed char p_13)
{
  signed char v_15;
  char v_11;
  signed char v;
  unsigned int result;
  v_15 = (signed char)p;
  v_11 = (char)-93;
  result = (unsigned int)(~ (4186317UL * (unsigned long)p_13) * (unsigned long)v_15);
  v = (signed char)(~ (~ (19571 / ((int)v_11 + 510))));
  v = (signed char)(~ ((int)p_9 - (int)v));
  result = ((((unsigned int)p / (p_4 + 588U)) * (result % (result + 330U))) / (unsigned int)(
            (122 * (int)v) * (int)(- p_7) + 276)) / 34U;
  return result;
}


