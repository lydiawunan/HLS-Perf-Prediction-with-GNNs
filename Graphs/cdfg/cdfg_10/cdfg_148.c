#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299361507
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned char p_4, long p_11,
                  double p_13[1][4][3], unsigned char p_15)
{
  double v_17;
  long long v_9;
  unsigned long long v_7;
  unsigned short v;
  unsigned long result;
  v_17 = (double)p_4;
  v_9 = (long long)p_4;
  result = 4294917910UL;
  if ((113UL & ((unsigned long)p_13[0][3][1] / 4294945681UL + (unsigned long)v_17 / 48371UL)) == (unsigned long)p_15) {
    v = (unsigned short)result;
    v_7 = (unsigned long long)(- (! ((int)((unsigned char)p_13[0][0][1]) ^ (int)p_4)));
    result = (unsigned long)(- (((long long)p_13[0][2][0] ^ v_9) - 87LL));
  }
  else {
    v_7 = (unsigned long long)(~ (~ -12602019LL));
    v = (unsigned short)(- p_13[0][0][0]);
    v = (unsigned short)(! ((unsigned long long)(- v) / (v_7 % 64746ULL + 332ULL)));
  }
  if (- (0. - (p_13[0][3][1] + (double)result)) != (double)p_15) {
    v = (unsigned short)(-103 & (int)p);
    result = (unsigned long)((unsigned long long)((int)p % ((-32618 >> (
                                                             (int)p_4 & 15)) + 659)) & (
                             (unsigned long long)((int)v - 666922166) - 18446744073709512323ULL));
  }
  else {
    result = 291114495UL;
    v = (unsigned short)(-323542418LL / ((v_9 * (long long)p_11 - (long long)(~ v)) + 339LL));
    result = (unsigned long)((unsigned long long)(4294962972UL + ! result) ^ 
                             (unsigned long long)v * v_7);
  }
  return result;
}


