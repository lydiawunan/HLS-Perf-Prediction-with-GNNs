#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 315024644
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, long long p_7, long p_13, int p_17)
{
  short v_15;
  char v_11;
  unsigned short v_9;
  unsigned int v_5;
  long v;
  unsigned char result;
  v_11 = (char)p_13;
  v_9 = (unsigned short)p_17;
  v_5 = (unsigned int)p_13;
  v = -67174877L;
  v_15 = (short)((int)p - (int)v_11 % ((p_17 << 16) + 818));
  if ((long long)(((unsigned long)p - 814004130UL) | (unsigned long)(- v)) * (
      17853LL + ((long long)v_5 | p_7)) > (long long)((long)(! ((int)v_9 & (int)v_11)) - 
                                                      (p_13 & (long)v_15) % 83L)) 
    result = (unsigned char)(! 18446744072940763882ULL);
  else result = (unsigned char)(~ (! p));
  return result;
}


