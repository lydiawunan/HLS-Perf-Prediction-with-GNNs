#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 586307120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, signed char p_5, int p_9, long p_13, long long p_15)
{
  double v_23;
  unsigned short v_21;
  float v_19;
  signed char v_17;
  long v_11;
  double v_7;
  double v;
  long result;
  v_23 = 371.310673346;
  v_21 = (unsigned short)p_13;
  v_17 = (signed char)-9;
  v_11 = (long)p_15;
  v_7 = 1.65789840255e+38;
  result = (long)p_15;
  if (v_23 == (double)((int)v_21 << ((int)v_17 & 15))) {
    result = (long)v_21;
    v_19 = (float)(((long)p_5 + - p) % 1L);
    v = (double)((6LL * p_15) % -64LL - (long long)(- ((unsigned int)v_17 % 962324930U)));
  }
  else {
    v_19 = (float)result;
    v = (double)(v_11 / (p + 982L));
    v_17 = (signed char)p_9;
  }
  while ((double)((unsigned long)(- (118L + p)) ^ ((unsigned long)(p / 67L) | 4294958419UL)) != 
         (4294960325. - v) - (double)((22909UL - (unsigned long)p_5) % 4089907209UL)) {
    v_7 = (int)((short)v_7) % -31190;
    v_11 = (long)((float)(((int)v_17 * -25933) * 15688) - v_19);
    v = (double)(((long long)(p_13 >> 18) - p_15) | (long long)p_13);
    v = (double)(~ ((unsigned long)((int)v + p_9) - (unsigned long)v_11 / 4294932319UL));
  }
  while_0_break: ;
  return result;
}


