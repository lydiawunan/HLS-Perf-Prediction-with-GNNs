#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 463916368
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[1], char p_4, short p_7, unsigned long p_9,
          int p_11)
{
  double v_17;
  unsigned char v_15;
  long v_13;
  long long v;
  short result;
  v_17 = (double)p_11;
  v_13 = -39292682L;
  v_15 = (unsigned char)((unsigned long)v_17 + ((unsigned long)p_7 & 3659387357UL));
  if (! ((unsigned long)p_7 / ((unsigned long)v_13 % (p_9 + 212UL) + 587UL)) <= (unsigned long)(
      18 % ((int)v_15 + 427))) result = (short)p[0];
  else {
    v = (long long)(((unsigned long)((int)p_4 + (int)p_7) - p_9 % 69UL) + 
                    (unsigned long)(! p_11) % ((554537316UL - (unsigned long)p[0]) + 164UL));
    result = (short)(! ((long long)(~ p_4) / (1013559491LL / (v + 182LL) + 40LL)));
  }
  return result;
}


