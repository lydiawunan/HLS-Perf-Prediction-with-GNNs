#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 722055971
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned long p_5,
                       unsigned short p_9, int p_11, char p_17)
{
  unsigned char v_19;
  unsigned char v_15;
  unsigned int v_13;
  unsigned int v_7;
  unsigned char v;
  unsigned long long result;
  v_19 = (unsigned char)138;
  v = (unsigned char)74;
  v_13 = (unsigned int)((float)(-62 * (int)p_17) / 5.0549443807e+36f + (float)v_19);
  v_15 = (unsigned char)(55553L % (-49336L / (long)((int)(! p_9) + 382) + 32L));
  v_7 = ((v_13 * 3977079566U - 4294967295U) - (unsigned int)(- (64669982 / (
                                                                (int)p_9 + 917)))) - (unsigned int)(~ v_15);
  result = (unsigned long long)((((unsigned long)((int)p * (int)v) - 
                                  p_5 / (unsigned long)(v_7 + 304U)) - (unsigned long)(! (! p_9))) / (unsigned long)(
                                ~ ((long)(- p_11) - -1034495568L) + 836L));
  return result;
}


