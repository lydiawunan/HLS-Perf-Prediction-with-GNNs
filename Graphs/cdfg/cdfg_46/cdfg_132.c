#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 87779612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, int p_4, unsigned long p_11, long p_13,
          unsigned char p_21)
{
  float v_19;
  unsigned short v_17;
  unsigned int v_15;
  long long v_9;
  unsigned short v_7;
  long v;
  short result;
  v_19 = (float)p;
  v_17 = (unsigned short)p_11;
  v_15 = 3620502554U;
  v_9 = (long long)p_21;
  v_7 = (unsigned short)2248;
  result = (short)-22371;
  while ((~ p_11 - (unsigned long)(98 >> 2U)) % (unsigned long)((int)result + 673) > (unsigned long)(! v_15)) {
    v_7 = (int)v_17 - -49708304;
    v_15 = (unsigned int)(~ (((int)((unsigned char)v_19) - (int)p_21) - 108));
    v_9 = (long long)p_4;
    result = (short)(-728027395LL);
  }
  while_0_break: ;
  if ((long long)((31504UL - (unsigned long)v_7) / 218UL) * - (4224691174LL * v_9) != (long long)(
      ((p_11 * (unsigned long)p_13) % (unsigned long)((61882U + v_15) + 147U)) % 682607810UL)) 
    result = (short)(- ((int)p & (p_4 - 24835)));
  else {
    v = (long)824139712.f;
    result = (short)(- v);
  }
  return result;
}


