#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 602316715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, signed char p_5, unsigned char p_11, int p_13,
                long long p_19)
{
  short v_21;
  float v_17;
  float v_15;
  unsigned int v_9;
  double v_7;
  unsigned int v;
  signed char result;
  v_21 = (short)p_13;
  v_17 = 9493291008.f;
  v_15 = -6.74778730289e+37f;
  v_9 = 4063901345U;
  v_7 = (double)p_13;
  v = (unsigned int)p;
  result = (signed char)p_19;
  while (~ ((unsigned int)(~ result) + (unsigned int)v_7 / (v_9 + 1009U)) < 
         (unsigned int)(4294950159. * p + (double)p_11) * ((4294934367U - v_9) ^ (unsigned int)p_13)) {
    v_7 = (double)v_17 * 2.99071464152e+38;
    v = (unsigned int)((double)(((float)v_21 / (v_15 + 128.f)) * -91.f) - 
                       v_7 / ((double)(-823639597LL - (long long)p) + 862.));
    v_15 = (float)((long long)(((long)result + -2957L) / ((long)(p - p) + 13L)) % (
                   ~ (p_19 % (long long)(v_9 + 310U)) + 52LL));
    v_9 = (unsigned int)(~ (! ((unsigned long)p / 4294964132UL)));
  }
  while_0_break: ;
  result = (signed char)((long long)(! (- v)) % (- ((long long)result + -819525357LL) + 683LL));
  return result;
}


