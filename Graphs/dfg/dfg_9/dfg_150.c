//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 133068202
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned char p_11,
                   unsigned long p_13)
{
  unsigned int v_9;
  char v_7;
  short v_5;
  short v;
  unsigned short result;
  v_9 = 194035664U;
  v_5 = (short)(~ (~ (! (p_13 + 4294957998UL))));
  v_7 = (char)(~ (~ ((v_9 % ((unsigned int)-591.057434082f + 233U)) / (unsigned int)(
                     (int)p_11 + 134))));
  v = (short)((int)v_5 % ((int)(~ v_7) * (int)((char)-6590307822.01) + 221));
  result = (unsigned short)(- (1ULL % (((p << ((int)v & 63)) + 57ULL) + 405ULL)));
  return result;
}


