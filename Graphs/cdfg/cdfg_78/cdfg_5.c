#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 385165923
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, double p_4, short p_6, unsigned short p_9,
         unsigned int p_13[4][4])
{
  unsigned long v_21;
  unsigned short v_19;
  unsigned long v_17;
  signed char v_15;
  unsigned short v_11;
  long long v;
  long result;
  v_19 = (unsigned short)49579;
  v_15 = (signed char)p_13[3][2];
  v_11 = (unsigned short)p_6;
  v_21 = (unsigned long)((float)(- ((int)v_15 / ((int)v_11 + 483))) / -807.367431641f);
  if (! (~ (4294937776UL + v_21)) > (unsigned long)(- ((int)v_15 % ((int)p_6 + 665)))) {
    v_11 = (unsigned short)7694;
    v = (long long)((unsigned long)v_11 + ((unsigned long)p_13[1][0] * (unsigned long)p + (unsigned long)(
                                           p % (long)((int)p_9 + 505))));
    result = (long)(((-275.463274047 - (double)p) - - p_4) - (double)(
                    ((long long)p_6 / (v + 749LL)) % (long long)((int)(! p_9) + 457)));
  }
  else {
    v_17 = (unsigned long)((int)v_19 / 27683);
    v_15 = (signed char)(~ (4072281166UL - v_17 / 208910435UL));
    result = - ((long)(- v_15) / (p + 662L));
  }
  return result;
}


