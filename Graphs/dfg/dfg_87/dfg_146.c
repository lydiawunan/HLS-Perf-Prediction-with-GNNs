#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648482255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, short p_5, unsigned int p_7,
         unsigned long long p_11[4][3], double p_13[2])
{
  unsigned short v_19;
  double v_17;
  signed char v_15;
  float v_9;
  char v;
  long result;
  v_19 = (unsigned short)20364;
  v_17 = 770.663411109;
  v_9 = -1415512064.f;
  result = (long)p;
  v_9 = (float)(- (~ p_11[0][0] & 18446744073709513782ULL) / (unsigned long long)(
                ((int)575463492025. + (int)(v_17 - (double)v_9) / ((int)((unsigned short)6351833801.1) % (
                                                                   (int)v_19 + 1013) + 5)) + 225));
  v_15 = (signed char)((int)p_5 * 179);
  v = (char)(((unsigned long)(! p_5) + ((9091UL - (unsigned long)p_7) - (unsigned long)(
                                        -4.08759995413e+37f * v_9))) & (unsigned long)(
             (int)(v_9 / ((float)(- p_11[3][0]) + 583.f)) + ((int)p_13[0] ^ 
                                                             11380 * (int)v_15)));
  result -= (long)((int)v >> (p & 7U));
  return result;
}


