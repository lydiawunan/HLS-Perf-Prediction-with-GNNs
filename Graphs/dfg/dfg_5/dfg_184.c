//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 528807038
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned char p_9, long p_11)
{
  char v_13;
  unsigned short v_7;
  signed char v_5;
  float v;
  long result;
  v_13 = (char)-70;
  v = (float)(((unsigned long)p_9 | - (4270422245UL % (unsigned long)(
                                       p_11 + 198L))) + (unsigned long)(
              (int)p_9 * ((int)v_13 * (int)(~ p_9))));
  v_7 = (unsigned short)p;
  v_5 = (signed char)-109;
  result = (long)(! ((long long)((unsigned int)v + p) ^ -26449LL % (long long)(
                                                        (int)v_5 + 220)) - (long long)v_7);
  return result;
}


