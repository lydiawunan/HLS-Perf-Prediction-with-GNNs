#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 51448319
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, double p_11, unsigned long long p_13, long p_15)
{
  unsigned char v_19;
  unsigned int v_17;
  unsigned short v_9;
  double v_6;
  signed char v_4;
  short v;
  float result;
  v_19 = (unsigned char)185;
  v_17 = (unsigned int)p_15;
  v_9 = (unsigned short)5653;
  v_6 = 966.020372527;
  v_4 = (signed char)p_13;
  v = (short)p_15;
  result = 4.18314683636e+37f;
  while (- ((double)p * v_6) + (double)(~ (- p_15)) == (double)(- (-2.02961671621e+38f + (float)(
                                                                   18259LL - (long long)p_15)))) {
    v_17 = (unsigned long)v_19 * ((unsigned long)v_17 % 4294925700UL);
    result = (float)(((long long)v + 791475096LL * (long long)p) / ((long long)p_11 + 166LL));
    v_9 = (unsigned short)v_6;
    v_6 = (double)result;
  }
  while_0_break: ;
  if ((unsigned long)(-74499635L % (long)((int)p + 415)) > (unsigned long)(
      (unsigned int)v_9 % ((14548U - (unsigned int)(p_11 / ((double)p_13 + 310.))) + 940U))) 
    result = (float)4071489813U;
  else {
    v_6 = (double)(! (! ((unsigned long long)p | 18446744072868673593ULL)));
    v = (short)((int)((unsigned short)(- result)) + (int)((double)((unsigned int)v_4 / 4040940865U) + v_6));
    result = (float)v;
  }
  return result;
}


