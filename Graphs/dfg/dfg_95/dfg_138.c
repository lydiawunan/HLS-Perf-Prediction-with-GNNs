#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656937901
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, int p_5, signed char p_9,
                 unsigned long p_17)
{
  signed char v_15;
  unsigned char v_13;
  float v_11;
  long v_7;
  unsigned char v;
  unsigned int result;
  v_15 = (signed char)-97;
  v_13 = (unsigned char)154;
  v_7 = -64307L;
  v_11 = (float)p_17;
  v = (unsigned char)((int)(- p_9) * ((int)((float)p - v_11) * ((int)v_13 / -28635)) - (int)v_15);
  result = (unsigned int)((long)(~ ((int)v * (34568 % (p_5 + 661)))) + ! v_7);
  result %= (unsigned int)((int)p + 770);
  return result;
}


