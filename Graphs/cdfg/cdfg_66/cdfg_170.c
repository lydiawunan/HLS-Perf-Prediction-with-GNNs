#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1046254007
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, int p_4, double p_6,
                signed char p_8[2][2][5], long p_10)
{
  float v_21;
  long v_19;
  signed char v_17;
  short v_15;
  int v_13;
  unsigned short v;
  signed char result;
  v_21 = 5611862016.f;
  v_17 = (signed char)74;
  v_15 = (short)10743;
  if (- v_21 > 23594.f) {
    v = (unsigned short)(~ ((long)((int)v_15 + (int)v_17) % ((long)v_15 / 59199L + 35L)));
    v_13 = (int)v;
    v = (unsigned short)((long)(~ (! p)) + (long)(- v) % ((long)v_13 / 39403L + 197L));
  }
  else {
    v = (unsigned short)(0 - ((-9527 << ((int)p & 15)) - (int)v_17));
    v_19 = (long)(-4701158912.f * (float)p_8[1][1][1]);
    v = (unsigned short)((unsigned long)((p_10 + (long)v) + 31879L) / (
                         (967275562UL | (unsigned long)v_19) + 44UL));
  }
  if ((long)(p_6 - (double)p_8[0][0][0]) + ((p_10 + (long)v) - -68L) > (long)p_8[0][0][4]) 
    result = (signed char)(- -65043L);
  else result = (signed char)((int)p >> (- (p_4 / -21) & 7));
  return result;
}


